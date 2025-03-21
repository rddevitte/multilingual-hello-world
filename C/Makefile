CC=gcc
CFLAGS=-Wall -Wextra -Wshadow -Werror -Wconversion -pedantic -Iinclude
RM=rm -vf

.PHONY: all clean mrproper

all: hello-world-english-app hello-world-portuguese-app

main.o: src/main.c
	$(CC) -c $< -o $@ $(CFLAGS)

hello-world-english-impl.o: src/hello-world-english-impl.c
	$(CC) -c $< -o $@ $(CFLAGS)

hello-world-portuguese-impl.o: src/hello-world-portuguese-impl.c
	$(CC) -c $< -o $@ $(CFLAGS)

hello-world-english-app: main.o hello-world-english-impl.o
	$(CC) $^ -o $@ $(CFLAGS)

hello-world-portuguese-app: main.o hello-world-portuguese-impl.o
	$(CC) $^ -o $@ $(CFLAGS)

clean:
	@$(RM) *.o

mrproper: clean
	@$(RM) hello-world-english-app hello-world-portuguese-app
