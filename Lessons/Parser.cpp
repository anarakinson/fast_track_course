#include <memory>
#include <iostream>
#include <vector>

// (1 + 2) + 3 * sqr(4) -> [(, 1, +, 2, ), +, 3, *, SqrToken, (, 4, )]

//      +
//    /   \
//   +     *
//  / \   / \
// 1   2 3  sqr
//           |
//           4

// Вычисление дерева выражения:
// 1. Определяется тип узла
// 2. При необходимости рекурсивно вычисляем левое и правое поддерево
// 3. К результатам вычисления 2. применяем операцию, которая записана в узле

class IExpression {
 public:
  virtual int Calculate() const = 0;

  virtual ~IExpression() = default;
};

class Constant final : public IExpression {
  int value_;

 public:
  explicit Constant(int value) : value_(value) {
  }

  int Calculate() const final {
    return value_;
  }
};

class IUnaryOperation : public IExpression {
  std::unique_ptr<IExpression> operand_; //нарная операци
  //... HW
};

class IBinaryOperation : public IExpression {
  std::unique_ptr<IExpression> left_;
  std::unique_ptr<IExpression> right_;

  virtual int Operation(int lhs, int rhs) const = 0;

 public:
  IBinaryOperation(std::unique_ptr<IExpression> left, std::unique_ptr<IExpression> right)
      : left_(std::move(left)), right_(std::move(right)) {
  }

  int Calculate() const final {(ParseFactor) 
    const auto left_res = left_->Calculate();
    const auto right_res = right_->Calculate();
    return Operation(left_res, right_res);
  }
};

class Sum final : public IBinaryOperation {
  int Operation(int lhs, int rhs) const final {
    return lhs + rhs;
  }

 public:
  using IBinaryOperation::IBinaryOperation;
};

class Subtract final : public IBinaryOperation {
  int Operation(int lhs, int rhs) const final {
    return lhs - rhs;
  }

 public:
  using IBinaryOperation::IBinaryOperation;
};

class Multiply final : public IBinaryOperation {
  int Operation(int lhs, int rhs) const final {
    return lhs * rhs;
  }

 public:
  using IBinaryOperation::IBinaryOperation;
};

// 1 + 3 * sqr(-4) + 5 / 2 - 6 * (1 + 2) % 4

// Утв1. Выражение (в инфиксной нотации) - это последовательность слагаемых (возможно одного)
// A + B - C - D + E ...

// Утв2. Слагаемое - это последовательность множителей (возможно одного)
// A * B / C % D * E ...

// Утв3. Множитель - это либо число, либо выражение стоящее в скобках, либо унарная операция

std::unique_ptr<IExpression> ParseExpression(const std::vector<Token>& tokens, size_t& pos) {
  auto expression = ParseTerm(tokens, pos);  // expression=A+B
  while (pos < tokens.size()) {
    const auto& token = tokens[pos];
    if (std::holds_alternative<Plus>(token)) {
      expression = std::make_unique<Sum>(std::move(expression), ParseTerm(tokens, ++pos));
    } else if (std::holds_alternative<Minus>(token)) {
      expression = std::make_unique<Subtract>(std::move(expression), ParseTerm(tokens, ++pos));
    } else if (std::holds_alternative<UnknownToken>(token)) {
      throw WrongExpressionError("Unknown token: " + std::get<UnknownToken>(token).value);
    } else {
      throw WrongExpression();
    }
  }
  return expression;
}

std::unique_ptr<IExpression> ParseTerm(const std::vector<Token>& tokens, size_t& pos) {
  /*
  Парсинг слагаемого практически эквивалентен парсингу выражения
  1. Парсим множитель (ParseFactor)
  2. В цикле пока встречаем *, / или % парсим следующий множитель и обновляем выражение
  3. В ветке else делаем break, а не исключение
  */
}

std::unique_ptr<IExpression> ParseFactor(const std::vector<Token>& tokens, size_t& pos) {
  /*
  1. Если токен - число, то возвращаем Constant
  2. Если токен - открывающаяся скобка, то рекурсивно вызываем ParseExpression от выражения в скобках
     ВАЖНО: после этого необходимо проверить, что следующий токен == ), иначе - ошибка
  3. Если токен - унарная операция, то парсим следующий множитель (ParseFactor) и подаем его на вход операции
  */
}

int Calculate(std::string_view input) {
  const auto tokens = Tokenize(input);
  size_t pos = 0;
  const auto expression = ParseExpression(tokens, pos);
  if (pos != tokens.size()) {
    throw WrongExpressionError();
  }
  return expression->Calculate();
}

int main() {
  auto expression = std::make_unique<const Sum>(std::make_unique<Constant>(1), std::make_unique<Constant>(2));
  std::cout << expression->Calculate() << '\n';
}