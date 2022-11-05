TARGET = hellognu

SDIR = src

SRC = main

CFLAGS = -Wall -Wextra -Werror

.PHONY: clean

all: build

build:
	$(CC) $(CFLAGS) $(SDIR)/$(SRC).c -o $(TARGET)

clean-local:
	rm -r autom4te.cache
	rm aclocal.m4
	rm compile
	rm configure
	rm install-sh
	rm missing
	rm config.log
	rm config.status
	rm configure~
	rm INSTALL
	rm Makefile