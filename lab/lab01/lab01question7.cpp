#include <iostream>
#include <string>

struct employee {
  std::string first_name, last_name, emp_num;
  int age;
};

int main(int argc, char *argv[]) {
  employee record;
  std::cout << "First name: ";
  std::cin >> record.first_name;
  std::cout << "Last name: ";
  std::cin >> record.last_name;
  std::cout << "Employee number: ";
  std::cin >> record.emp_num;
  std::cout << "Age: ";
  std::cin >> record.age;

  std::cout << std::endl;
  std::cout << "Hello " << record.first_name << " " << record.last_name
            << std::endl;
  std::cout << "Your employee number " << record.emp_num << std::endl;
  std::cout << "You are " << record.age << " years old" << std::endl;
  return 0;
}
