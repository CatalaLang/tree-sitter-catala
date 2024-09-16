package tree_sitter_catala_en_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-catala_en"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_catala_en.Language())
	if language == nil {
		t.Errorf("Error loading CatalaEn grammar")
	}
}
