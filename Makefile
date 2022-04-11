CFLAGS=-std=c11 -g -static

xcc: main.o
	$(CC) -o $@ $? $(LDFLAGS)

test: xcc
	./test.sh

clean:
	rm -f xcc *.o *~ tmp*

.PHONY: test clean