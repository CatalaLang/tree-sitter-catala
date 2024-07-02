TREESITTER_CATALA_LANG ?= en
export TREESITTER_CATALA_LANG

default: Cargo.toml libtree-sitter-catala-$(TREESITTER_CATALA_LANG).so
.PHONY: default all

all:
	$(MAKE) default TREESITTER_CATALA_LANG=en
	$(MAKE) default TREESITTER_CATALA_LANG=fr

src/parser.c: grammar.js
	tree-sitter generate

.PHONY: ALWAYS
ifneq "$(TREESITTER_CATALA_LANG)" "$(shell cat _lang)"
_lang: ALWAYS
	@echo "Selected lang: $(TREESITTER_CATALA_LANG)"
	@echo $(TREESITTER_CATALA_LANG) >$@
endif

Cargo.toml: Cargo.toml.in _lang
	sed 's/$${TREESITTER_CATALA_LANG}/'$(TREESITTER_CATALA_LANG)'/g' $< >$@

libtree-sitter-catala-${TREESITTER_CATALA_LANG}.so: grammar.js _lang
	tree-sitter generate
	gcc -shared -fPIC -fno-exceptions -g -O2 -I src src/parser.c -o $@
