#include "tokenizer.hpp"

#include <iostream>
#include <string>


// вспомогательная функция для отображения получившегося вектора токенов
void print_tokens(const std::vector<Token> &vec) {
    for (auto x : vec) {
        if (std::holds_alternative<Number>(x)) {
            std::cout << " number: " << std::get<Number>(x).value << std::endl;
        } else if (std::holds_alternative<Plus>(x)) {
            std::cout << " + " << std::endl;
        } else if (std::holds_alternative<Minus>(x)) {
            std::cout << " - " << std::endl;
        } else if (std::holds_alternative<Multiply>(x)) {
            std::cout << " * " << std::endl;
        } else if (std::holds_alternative<Divide>(x)) {
            std::cout << " / " << std::endl;
        } else if (std::holds_alternative<Modulo>(x)) {
            std::cout << " % " << std::endl;
        } else if (std::holds_alternative<MinToken>(x)) {
            std::cout << " min " << std::endl;
        } else if (std::holds_alternative<AbsToken>(x)) {
            std::cout << " abs " << std::endl;
        } else if (std::holds_alternative<Square>(x)) {
            std::cout << " sqr " << std::endl;
        } else if (std::holds_alternative<OpeningBracket>(x)) {
            std::cout << " ( " << std::endl;
        } else if (std::holds_alternative<ClosingBracket>(x)) {
            std::cout << " ) " << std::endl;
        } else if (std::holds_alternative<UnknownToken>(x)) {
            std::cout << " uncknown token: " << std::get<UnknownToken>(x).value << std::endl;
        } else {
            std::cout << "???" << std::endl;
        }
    }
}


int main() {

    // проверим строку, где есть почти все виды токенов и не всегда есть пробелы между ними
    std::string expr = "-1 +1*    2    - 123 *sqr(2) % (11 + 12)+(3-qwerty)";

    auto tokens = Tokenize(expr);

    std::cout << tokens.size() << std::endl;

    // смотрим, что получилось
    print_tokens(tokens);

}
