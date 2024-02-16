#include <iostream>
#include <vector>
#include <string>

class Nonterminal {
public:
    char name;
    std::vector<std::string> productions;

    Nonterminal(char n) : name(n) {}
};

class Grammar {
public:
    std::vector<Nonterminal> nonterminals;

    bool parse(const Nonterminal& nonterminal, const std::string& sentence) {
        return false;
    }
};

int main() {
    Grammar grammar;
    grammar.nonterminals.emplace_back('E');
    grammar.nonterminals.back().productions = {"id", "num", "E + E", "E + (E)"};
    grammar.nonterminals.emplace_back('i');
    grammar.nonterminals.back().productions = {"a", "j", "h"};
    grammar.nonterminals.emplace_back('n');
    grammar.nonterminals.back().productions = {"0", "2", "3"};

    const std::string sentence = "a + (j+3)";

    // Assuming we are parsing using the first nonterminal 'E'
    const Nonterminal& startNonterminal = grammar.nonterminals[0];

    if (grammar.parse(startNonterminal, sentence)) {
        std::cout << "Supported sentence." << std::endl;
    } else {
        std::cout << "Not a supported sentence." << std::endl;
    }

    return 0;
}
