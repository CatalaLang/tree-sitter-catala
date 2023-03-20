all: libtree-sitter-catala_en.so libtree-sitter-catala_fr.so
.PHONY: all

src/parser.c: grammar.js
	tree-sitter generate

libtree-sitter-catala_en.so: grammar.js
	TREESITTER_CATALA_LANG="en" tree-sitter generate
	gcc -shared -fPIC -fno-exceptions -g -O2 -I src src/parser.c -o $@

libtree-sitter-catala_fr.so: grammar.js
	TREESITTER_CATALA_LANG="fr" tree-sitter generate
	gcc -shared -fPIC -fno-exceptions -g -O2 -I src src/parser.c -o $@
