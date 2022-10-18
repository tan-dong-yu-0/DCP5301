#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  struct employee {
    std::string name;
    float salary;
  };

  int numberOfEmployee;

  std::cout << "Enter number of employess: ";
  std::cin >> numberOfEmployee;

  employee *employees = new employee[numberOfEmployee];

  for (int i = 0; i < numberOfEmployee; i++) {
    std::cout << "Employee " << i + 1 << std::endl;
    std::cout << "\t Enter name: ";
    std::cin >> employees[i].name;
    std::cout << "\t Enter salary: ";
    std::cin >> employees[i].salary;
    std::cout << std::endl;
  }

  std::cout << "*****Employee Details*****" << std::endl;
  std::cout << std::endl;

  for (int i = 0; i < numberOfEmployee; i++) {
    std::cout << "Name: " << employees[i].name << std::endl;
    std::cout << "Salary: " << employees[i].salary << std::endl;
    std::cout << std::endl;
  }

  return 0;
}
