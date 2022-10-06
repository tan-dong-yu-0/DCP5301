#include <iostream>

int Sum(int *arr, int size) {
  int sum = 0;
  for (int i = 1; i <= size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main(int argc, char *argv[]) {
  int arr[5];

  std::cout
      << "Enter five numbers and the program will calculate sum of the numbers."
      << std::endl;
  for (int i = 1; i <= 5; i++) {
    std::cout << "Enter number " << i << ": ";
    std::cin >> arr[i];
  }

  std::cout << "You have entered: ";

  for (int j = 1; j <= 5; j++) {
    std::cout << arr[j];
    if (j != 5) {
      std::cout << ", ";
    }
  }

  std::cout << std::endl;

  std::cout << "Sum of the numbers entered is: " << Sum(arr, 5) << std::endl;

  return 0;
}
