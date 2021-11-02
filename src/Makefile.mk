CC=gcc
CFLAGS=
LIB=
all:main

main1:header
	$(CC) $(CFLAGS) header.o main.c -o main

header:
	$(CC) $(CFLAGS) -c header.c

run:
	.\main.exe

clean:
	rm main.exe