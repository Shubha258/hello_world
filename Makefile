CC= gcc
CFLAGS=
LIB=

all:main

myfile:
	$(CC) $(CFLAGS) -c header.c

main:myfile
	$(CC) $(CFLAGS) header.o main.c -o main

run:
	.\main.exe