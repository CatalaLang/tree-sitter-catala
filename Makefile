TREESITTER_CATALA_LANG ?= en
export TREESITTER_CATALA_LANG

TREESITTER_CATALA_VARIANT ?= catala
export TREESITTER_CATALA_VARIANT

SUBDIR = $(TREESITTER_CATALA_VARIANT)_$(TREESITTER_CATALA_LANG)

LANGS = en fr pl

VARIANTS = catala catala_code catala_expr

COMBINATIONS = $(foreach V,$(VARIANTS),$(foreach L,$(LANGS),$V_$L))

LIB = $(SUBDIR)/libtree-sitter-$(TREESITTER_CATALA_VARIANT)_$(TREESITTER_CATALA_LANG).so

.PHONY: generate lib all dist-clean ALWAYS

all: $(LANGS)

full: $(VARIANTS)

$(LANGS): Cargo.toml.in grammar.js ALWAYS
	$(MAKE) generate lib TREESITTER_CATALA_LANG=$@

$(VARIANTS): Cargo.toml.in grammar.js ALWAYS
	$(MAKE) $(LANGS) TREESITTER_CATALA_VARIANT=$@

lib: $(LIB)
$(LIB): generate
	@echo "Compiling $@ library"
	@cd $(SUBDIR) && tree-sitter build && tree-sitter build --wasm
	@cp -f $(SUBDIR)/parser.so $(@F)
	# @gcc -shared -fPIC -fno-exceptions -g -O2 -I $(TREESITTER_CATALA_LANG)/src $(TREESITTER_CATALA_LANG)/src/parser.c -o $@

generate: Cargo.toml.in grammar.js ALWAYS
	@echo "Generating tree-sitter-$(TREESITTER_CATALA_VARIANT)-$(TREESITTER_CATALA_LANG)"
	@mkdir -p $(SUBDIR)
	@sed 's/$${TREESITTER_CATALA_VARIANT}/'$(TREESITTER_CATALA_VARIANT)'/g; s/$${TREESITTER_CATALA_LANG}/'$(TREESITTER_CATALA_LANG)'/g' $< > $(SUBDIR)/Cargo.toml
	@cp grammar.js $(SUBDIR)
	@cd $(SUBDIR) && tree-sitter generate --abi=14 # emacs requires <15

dist-clean:
	rm -rf $(LANGS) $(LIBS) $(VARIANTS)_??
