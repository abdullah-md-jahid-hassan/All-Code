#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Nonterminal structure
struct Nonterminal {
    char name;
    char productions[10][10];
    int numProductions;
};

// Grammar structure
struct Grammar {
    struct Nonterminal nonterminals[10];
    int numNonterminals;
};

// Function to parse given sentence using leftmost derivation
bool parse(struct Grammar grammar, struct Nonterminal nonterminal, const char* sentence) {

}

int main() {
    struct Grammar grammar = {
        .nonterminals = {
            {'E', {"id", "num", "E + E", "E + (E)"}},
            {'i', {"a", "j","h"}},
            {'n', {"0", "2", "3"}}
        },
        .numNonterminals = 3
    };

    const char sentence[] = "a + (j+3)";

    // Assuming we are parsing using the first nonterminal 'E'
    struct Nonterminal startNonterminal = grammar.nonterminals[0];

    if (parse(grammar, startNonterminal, sentence)) {
        printf("Supported sentence.\n");
    } else {
        printf("Not a supported sentence.\n");
    }

    return 0;
}
