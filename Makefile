PROGS = sh_quote
CFLAGS = -std=c99 -pedantic

default: $(PROGS)

test: $(PROGS)
	./test_sh_quote

install: $(PROGS)
	install -D -m 0755 $(PROGS) $(DESTDIR)$(PREFIX)/bin

clean:
	rm -f $(PROGS)
