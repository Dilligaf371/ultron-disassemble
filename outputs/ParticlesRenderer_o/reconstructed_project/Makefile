CC = clang
CFLAGS = -O2 -Wall -Wextra -std=c17

all: reconstructed_bin

reconstructed_bin: reconstructed.c
	$(CC) $(CFLAGS) reconstructed.c -o reconstructed_bin

clean:
	rm -f reconstructed_bin
