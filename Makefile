CFLAG = -Wall -Wextra -Werror
CC = gcc

homoglyphs.o: homoglyphs.c
	${CC} ${CFLAGS} -c homoglyphs.c

main: homoglyphs.o hide_tweet.c
	${CC} ${CFLAGS} -o main homoglyphs.o hide_tweet.c

encode: main
	./encode.sh

clean:
	rm -f *.o *.out *.exe
