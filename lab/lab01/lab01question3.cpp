#include <iostream>

int main(int argc, char *argv[]) {
  char symbol;
  int operand1 = 0, operand2 = 0, output = 0;

  std::cout << "Enter an operator (+,-,*,/) : ";
  std::cin >> symbol;
  std::cout << "Enter two operands : ";
  std::cin >> operand1 >> operand2;
  switch (symbol) {
  case '+':
    output = operand1 + operand2;
    break;
  case '-':
    output = operand1 - operand2;
    break;
  case '*':
    output = operand1 * operand2;
    break;
  case '/':
    output = operand1 / operand2;
    break;
  }
  std::cout << operand1 << " " << symbol << " " << operand2 << " = " << output
            << std::endl;
  return 0;
}
