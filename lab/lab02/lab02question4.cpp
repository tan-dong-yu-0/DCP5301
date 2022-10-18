#include <iostream>

void add(int &r, int v) {
  r = r + 5;
  v = v + 5;
}

int main(int argc, char *argv[]) {
  int x, y;
  std::cout << "Enter value 1: ";
  std::cin >> x;
  std::cout << "Enter value 2: ";
  std::cin >> y;
  add(x, y);
  std::cout << "The effect of passing value1 by reference is: " << x << std::endl;
  std::cout << "The effect of passing value2 by value is: " << y << std::endl;

  return 0;
}
