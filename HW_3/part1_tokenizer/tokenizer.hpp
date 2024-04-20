
// Задание 1 (15 баллов): 
// 1. Дополнить решение токенами: max, sqr
// 2. Добавить все необходимые классы в определение Token
// 3. Реализовать ParseName, который читает последовательность букв и возвращает токен соответствующей функции или UnknownToken
// 4. Закончить Tokenize

#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <array>
#include <variant>
#include <unordered_map>

// (1 + 2) * 3 / 4 + 5 * (6 - 7)

// 1. Токенизация
// 2. Парсер (построение дерева разбора выражения)

// +, -, *, /, %

struct OpeningBracket {};

struct ClosingBracket {};

struct Number {
  int value;
};

struct UnknownToken {
  std::string value;
};

struct MinToken {};

struct AbsToken {};

struct Plus {};

struct Minus {};

struct Multiply {};

struct Modulo {};

struct Divide {};

struct Square {};


using Token = std::variant<
    // brackets
    OpeningBracket, 
    ClosingBracket, 
    // number
    Number, 
    // unknown
    UnknownToken, 
    // name
    MinToken, 
    AbsToken, 
    Square,
    // symbol
    Plus, 
    Minus,
    Multiply,
    Divide, 
    Modulo
>;


// многобуквенные операторы и неизвестные токены
Token ParseName(const std::string& input, size_t& pos) {
    int value = 0;
    std::string word{};
    while (true) {
        if (
            // если строка кончится или попадется не буква и не цифра - прерываем цикл
            pos == input.size() - 1 || 
            !std::isalnum(static_cast<unsigned char>(input[pos]))
        ) {
            break;
        }
        word += input[pos];
        ++pos;
    }
    if (word == "abs") {
        return AbsToken{};
    } else if (word == "sqr") {
        return Square{};
    } else if (word == "min") {
        return MinToken{};
    } else {
        return UnknownToken{word};
    }
}


// операторы и скобки
const std::unordered_map<char, Token> kSymbol2Token{
    {'+', Plus{}}, {'-', Minus{}}, {'*', Multiply{}}, {'/', Divide{}}, {'%', Modulo{}}, {')', ClosingBracket{}}, {'(', OpeningBracket{}}
};


int ToDigit(unsigned char symbol) {
  return symbol - '0';
}

// числа
Number ParseNumber(const std::string& input, size_t& pos) {
    int value = 0;
    auto symbol = static_cast<unsigned char>(input[pos]);
    while (std::isdigit(symbol)) {
        value = value * 10 + ToDigit(symbol);
        if (pos == input.size() - 1) {
            break;
        }
        symbol = static_cast<unsigned char>(input[++pos]);
    }
    return Number{value};
}



std::vector<Token> Tokenize(const std::string& input) {
    std::vector<Token> tokens;
    const size_t size = input.size();
    size_t pos = 0;
    while (pos < size) {
        const auto symbol = static_cast<unsigned char>(input[pos]);
        if (std::isspace(symbol)) {                                    // пробелы
            pos++;
        } else if (std::isdigit(symbol)) {                             // цифры
            tokens.emplace_back(ParseNumber(input, pos));
        } else if (auto it = kSymbol2Token.find(symbol); it != kSymbol2Token.end()) {   // односложные операторы или скобки
            tokens.emplace_back(it->second);
            pos++;
        } else {                                                       // многосложные операторы и неизвестные токены
            tokens.emplace_back(ParseName(input, pos));
        }
    }
    return tokens;
}
