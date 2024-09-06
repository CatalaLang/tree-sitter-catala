TREESITTER_CATALA_LANG ?= en
export TREESITTER_CATALA_LANG

LANGS = en fr pl
LIB = $(TREESITTER_CATALA_LANG)/libtree-sitter-catala-$(TREESITTER_CATALA_LANG).so

.PHONY: generate lib all dist-clean ALWAYS

all:
	@for lang in $(LANGS); do $(MAKE) generate lib TREESITTER_CATALA_LANG=$$lang ; done

$(LANGS): Cargo.toml.in grammar.js ALWAYS
	$(MAKE) generate lib TREESITTER_CATALA_LANG=$@

lib: $(LIB)
$(LIB): generate
	@echo "Compiling $@ library"
	@gcc -shared -fPIC -fno-exceptions -g -O2 -I $(TREESITTER_CATALA_LANG)/src $(TREESITTER_CATALA_LANG)/src/parser.c -o $@

generate: Cargo.toml.in grammar.js ALWAYS
	@echo "Generating tree-sitter-catala-$(TREESITTER_CATALA_LANG)"
	@mkdir -p $(TREESITTER_CATALA_LANG)
	@sed 's/$${TREESITTER_CATALA_LANG}/'$(TREESITTER_CATALA_LANG)'/g' $< > $(TREESITTER_CATALA_LANG)/Cargo.toml
	@cp grammar.js $(TREESITTER_CATALA_LANG)
	@cd $(TREESITTER_CATALA_LANG) && tree-sitter generate

dist-clean:
	rm -rf $(LANGS) $(LIBS)
