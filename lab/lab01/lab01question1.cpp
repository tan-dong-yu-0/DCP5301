// question 1
#include <iostream>
int main(int argc, char *argv[]) {
  int arr[4], largestNumber = 0;

  std::cout << "Enter four integers: ";

  for (int i = 0; i < 4; i++) {
    std::cin >> arr[i];
  }

  for (int i = 0; i < 4; i++) {
    if (arr[i] > largestNumber) {
      largestNumber = arr[i];
    }
  }

  std::cout << "Maximum number: " << largestNumber << std::endl;

  return 0;
}
