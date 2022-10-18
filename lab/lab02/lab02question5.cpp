#include <iostream>

int main(int argc, char *argv[]) {
  int i, n;
  float sum = 0.0, avg;
  float *p;
  std::cout << "How many marks would you like to enter? ";
  std::cin >> n;
  p = new float[n];
  for (i = 0; i < n; ++i) {
    std::cout << "Enter marks " << i + 1 << ": ";
    std::cin >> p[i];
  }

  std::cout << "You have entered: " ;
  for (i = 0; i < n; i++) {
    std::cout << p[i] << " ";
    sum += p[i];
  }

  std::cout << std::endl;

  std::cout << "Sum of marks is: " << sum << std::endl;

  avg = sum / n;

  std::cout << "Average marks is: " << avg << std::endl;

  return 0;
}
