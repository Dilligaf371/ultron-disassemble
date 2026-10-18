#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <mach-o/loader.h>

__attribute__((visibility("default")))
bool LLVMService_assemble_unchecked(
    const char *triple,
    const char *cpu,
    const char *features,
    const char *instruction,
    bool intel_syntax,
    uint8_t *out_bytes,
    uint32_t *out_len,
    char *out_diag_errors
) {
    if (!instruction || !out_bytes || !out_len || !out_diag_errors) {
        return false;
    }
    *out_len = 0;
    out_diag_errors[0] = '\0';

    const char *target = (triple && triple[0]) ? triple : "arm64-apple-macosx";
    int is_arm64 = (strstr(target, "arm64") != NULL || strstr(target, "aarch64") != NULL);

    char asm_path[] = "/tmp/ultron_asm_XXXXXX.s";
    char obj_path[] = "/tmp/ultron_obj_XXXXXX.o";
    char err_path[] = "/tmp/ultron_err_XXXXXX.log";
    int fd_asm = mkstemps(asm_path, 2);
    int fd_obj = mkstemps(obj_path, 2);
    int fd_err = mkstemps(err_path, 4);
    if (fd_asm < 0 || fd_obj < 0 || fd_err < 0) {
        if (fd_asm >= 0) close(fd_asm);
        if (fd_obj >= 0) close(fd_obj);
        if (fd_err >= 0) close(fd_err);
        snprintf(out_diag_errors, 4096, "Failed to create temporary files");
        return false;
    }
    close(fd_obj);
    close(fd_err);

    FILE *fa = fdopen(fd_asm, "w");
    if (!is_arm64 && intel_syntax) {
        fprintf(fa, ".intel_syntax noprefix\n");
    }
    fprintf(fa, "%s\n", instruction);
    fclose(fa);

    char cmd[2048];
    snprintf(cmd, sizeof(cmd), "/usr/bin/clang -target '%s' -x assembler -c '%s' -o '%s' 2>'%s'",
             target, asm_path, obj_path, err_path);
    int rc = system(cmd);

    if (rc != 0) {
        FILE *fe = fopen(err_path, "r");
        if (fe) {
            size_t n = fread(out_diag_errors, 1, 4095, fe);
            out_diag_errors[n] = '\0';
            fclose(fe);
        }
        unlink(asm_path);
        unlink(obj_path);
        unlink(err_path);
        return false;
    }

    bool ok = false;
    FILE *fo = fopen(obj_path, "rb");
    if (fo) {
        fseek(fo, 0, SEEK_END);
        long fsize = ftell(fo);
        fseek(fo, 0, SEEK_SET);
        if (fsize > (long)sizeof(struct mach_header_64)) {
            uint8_t *buf = (uint8_t *)malloc(fsize);
            if (buf && fread(buf, 1, fsize, fo) == (size_t)fsize) {
                struct mach_header_64 *mh = (struct mach_header_64 *)buf;
                if (mh->magic == MH_MAGIC_64) {
                    uint8_t *cmd_ptr = buf + sizeof(struct mach_header_64);
                    for (uint32_t i = 0; i < mh->ncmds; i++) {
                        struct load_command *lc = (struct load_command *)cmd_ptr;
                        if (lc->cmd == LC_SEGMENT_64) {
                            struct segment_command_64 *seg = (struct segment_command_64 *)cmd_ptr;
                            struct section_64 *sec = (struct section_64 *)(cmd_ptr + sizeof(struct segment_command_64));
                            for (uint32_t j = 0; j < seg->nsects; j++) {
                                if (strncmp(sec[j].sectname, "__text", 16) == 0 && sec[j].size > 0 && sec[j].size <= 128) {
                                    memcpy(out_bytes, buf + sec[j].offset, sec[j].size);
                                    *out_len = (uint32_t)sec[j].size;
                                    ok = true;
                                    break;
                                }
                            }
                        }
                        if (ok) break;
                        cmd_ptr += lc->cmdsize;
                    }
                }
                free(buf);
            }
        }
        fclose(fo);
    }

    unlink(asm_path);
    unlink(obj_path);
    unlink(err_path);
    return ok;
}
