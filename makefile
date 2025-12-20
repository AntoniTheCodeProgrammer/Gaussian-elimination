CC = gcc
CFLAGS = -Wall -g

app: main.o matrix.o gauss.o
	$(CC) $(CFLAGS) -o app main.o matrix.o gauss.o

main.o: main.c matrix.h gauss.h
	$(CC) $(CFLAGS) -c main.c

matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c matrix.c

gauss.o: gauss.c gauss.h
	$(CC) $(CFLAGS) -c gauss.c

clean:
	rm -f *.o app