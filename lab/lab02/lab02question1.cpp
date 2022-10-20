#include <iostream>
#include <string>

struct employee {
  std::string name;
  float salary;
};

int getNumberOfEmployee() {

  int numberOfEmployee;

  std::cout << "Enter number of employess: ";
  std::cin >> numberOfEmployee;

  return numberOfEmployee;
};

employee *getArray(int numberOfEmployee) {
  return new employee[numberOfEmployee];
};

void readEmployees(employee *employees, int numberOfEmployee) {
  for (int i = 0; i < numberOfEmployee; i++) {
    std::cout << "Employee " << i + 1 << std::endl;
    std::cout << "\t Enter name: ";
    std::cin >> employees[i].name;
    std::cout << "\t Enter salary: ";
    std::cin >> employees[i].salary;
    std::cout << std::endl;
  }
};

void header() {
  std::cout << "*****Employee Details*****" << std::endl;
  std::cout << std::endl;
};

void printEmployee(employee *employees, int numberOfEmployee) {
  for (int i = 0; i < numberOfEmployee; i++) {
    std::cout << "Name: " << employees[i].name << std::endl;
    std::cout << "Salary: " << employees[i].salary << std::endl;
    std::cout << std::endl;
  }
};

int main(int argc, char *argv[]) {

  int numberOfEmployee = getNumberOfEmployee();

  employee *employees = getArray(numberOfEmployee);

  readEmployees(employees, numberOfEmployee);

  header();

  printEmployee(employees, numberOfEmployee);

  return 0;
}
