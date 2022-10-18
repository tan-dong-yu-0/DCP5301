#include <iostream>

int main(int argc, char *argv[]) {
  int studentMark = 0, i = 0, totalMark = 0;
  double averageMark = 0;

  while (i < 5) {
    std::cout << "Enter mark: ";
    std::cin >> studentMark;
    totalMark += studentMark;
    i++;
  }
  averageMark = double(totalMark) / 5;
  std::cout << "Mark average is: " << averageMark << std::endl;
  return 0;
}
