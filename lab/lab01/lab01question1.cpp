// question 1
#include <iostream>
int main(int argc, char *argv[]) {
  int num, largestNumber = 0;

  std::cout << "Enter four integers: ";
  std::cin >> num;

  for (int i = 0; i < 3; i++) {
    std::cin >> num;
    if (num > largestNumber) {
      largestNumber = num;
    }
  }

  std::cout << "Maximum number: " << largestNumber << std::endl;

  return 0;
}
