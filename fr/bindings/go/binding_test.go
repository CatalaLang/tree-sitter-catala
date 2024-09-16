package tree_sitter_catala_fr_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-catala_fr"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_catala_fr.Language())
	if language == nil {
		t.Errorf("Error loading CatalaFr grammar")
	}
}
