CC := /usr/bin/gcc

all: clean | part1 part2 part3 part4

part1:
	$(CC) -o part1 src/thepract3_1.c
part2:
	$(CC) -o part2 src/thepract3_2.c
part3:
	$(CC) -o part3 src/thepract3_3.c
part4:
	$(CC) -o part4 src/thepract3_4.c -lm
	
clean:
	rm -rf part*
