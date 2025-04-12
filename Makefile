CC = gcc
CFLAGS = -g -Wall -Werror
RM = rm -rf

all : cricket

cricket : *.c *.h
	$(CC) $(CFLAGS) - o cricket *.c *.h 



clean:
	$(RM) cricket

