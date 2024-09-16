package tree_sitter_catala_pl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-catala_pl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_catala_pl.Language())
	if language == nil {
		t.Errorf("Error loading CatalaPl grammar")
	}
}
