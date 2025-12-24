CC = gcc
CFLAGS = -Wall -g

app: main.o matrix.o gauss.o podstawienie.o
	$(CC) $(CFLAGS) -o app main.o matrix.o gauss.o podstawienie.o

main.o: main.c matrix.h gauss.h podstawienie.h
	$(CC) $(CFLAGS) -c main.c

matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c matrix.c

gauss.o: gauss.c gauss.h matrix.h
	$(CC) $(CFLAGS) -c gauss.c

podstawienie.o: podstawienie.c podstawienie.h matrix.h
	$(CC) $(CFLAGS) -c podstawienie.c

clean:
	rm -f *.o app
