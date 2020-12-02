CC= gcc
FLAGS = -Wall -g
all: myBank.o main.o
	$(CC) $(FLAGS) -o myBank.exe myBank.o main.o
main.o:main.c myBank.h
	$(CC) $(FLAGS) -c main.c
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
clean:
	rm -f *.o *.exe