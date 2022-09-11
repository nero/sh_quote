PROGS = sh_quote
CFLAGS = -std=c99 -pedantic

default: $(PROGS)

test: $(PROGS)
	./test_sh_quote

clean:
	rm -f $(PROGS)
