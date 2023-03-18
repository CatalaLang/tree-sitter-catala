all: libtree-sitter-catala.so
.PHONY: all

src/parser.c: grammar.js
	tree-sitter generate

libtree-sitter-catala.so:
	gcc -shared -fPIC -fno-exceptions -g -O2 -I src src/parser.c -o $@
