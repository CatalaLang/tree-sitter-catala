TREESITTER_CATALA_LANG ?= en
export TREESITTER_CATALA_LANG

LANGS = en fr pl
LIB = $(TREESITTER_CATALA_LANG)/libtree-sitter-catala_$(TREESITTER_CATALA_LANG).so

.PHONY: generate lib all dist-clean ALWAYS

all:
	@for lang in $(LANGS); do $(MAKE) generate lib TREESITTER_CATALA_LANG=$$lang ; done

$(LANGS): Cargo.toml.in grammar.js ALWAYS
	$(MAKE) generate lib TREESITTER_CATALA_LANG=$@

lib: $(LIB)
$(LIB): generate
	@echo "Compiling $@ library"
	@cd $(TREESITTER_CATALA_LANG) && tree-sitter build && tree-sitter build --wasm
	@ln -sf $(TREESITTER_CATALA_LANG)/parser.so $(@F)
	# @gcc -shared -fPIC -fno-exceptions -g -O2 -I $(TREESITTER_CATALA_LANG)/src $(TREESITTER_CATALA_LANG)/src/parser.c -o $@

generate: Cargo.toml.in grammar.js ALWAYS
	@echo "Generating tree-sitter-catala-$(TREESITTER_CATALA_LANG)"
	@mkdir -p $(TREESITTER_CATALA_LANG)
	@sed 's/$${TREESITTER_CATALA_LANG}/'$(TREESITTER_CATALA_LANG)'/g' $< > $(TREESITTER_CATALA_LANG)/Cargo.toml
	@cp grammar.js $(TREESITTER_CATALA_LANG)
	@cd $(TREESITTER_CATALA_LANG) && tree-sitter generate --abi=14 # emacs requires <15

dist-clean:
	rm -rf $(LANGS) $(LIBS)
