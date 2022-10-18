#include <iostream>
using namespace std;

struct Employee {
  string first_name;
  string last_name;
  string emp_num;
  int age;
};

void printer1(Employee *emp) {
  cout << emp->first_name << " " << emp->last_name << ":" << emp->emp_num << ":"
       << emp->age << endl;
}

void printer2(const Employee &emp) {
  cout << emp.first_name << " " << emp.last_name << ":" << emp.emp_num << ":"
       << emp.age << endl;
}
int main() {
  Employee *emp;

  emp = new Employee;
  emp->first_name = "Dong Yu";
  emp->last_name = "Tan";
  emp->emp_num = "1211200835";
  emp->age = 19;

  printer1(emp);
  printer2(*emp);

  Employee a{"Dong Yu", "Tan", "1211200835", 19};
  printer2(a);
}
// int main(){
//     Employee emp;
//     emp.first_name = "Sharaf";
//     emp.last_name = "Horani";
//     emp.emp_num = "MU171000";
//     emp.age = 35;

//     cout << emp.first_name << " "
//          << emp.last_name  << ":"
//          << emp.emp_num    << ":"
//          << emp.age << endl;

//     Employee *ptr;
//     ptr = &emp;

//     ptr->age = 45;
//     (*ptr).age = 54;

//     cout << emp.age << endl;
// }

// Lab1_EX6
// const int SIZE = 3;

// int main() {
//     int arr[SIZE];

//     for (int i=0; i<SIZE; i++){
//         cout << "Enter an integer :";
//         cin >> arr[i];
//     }

//     int sum = 0;
//     for (int i=0; i<SIZE; i++){
//         sum += arr[i];
//     }

//     double avg = (double)sum / SIZE;
//     cout << avg << endl;

//     return 0;
// }

// Extra code
// int main()
// {
//     int x =10;

//     cout << x++ << endl;
//     cout << x << endl;

//     int y = x++ + 5;
//     cout << y << ":" << x << endl;

//     x = 6;
//     y = ++x + 1;
//     cout << y << ":" << x << endl;

//     x = 5;
//     y = 3;
//     y = --y + x++;
//     cout << y << ":" << x << endl;

// }

// Lab1_Ex5
// int main() {

//     int mark;
//     int sum = 0;
//     for (int i=0; i<5; i++){
//         cout << "Enter an integer :";
//         cin >> mark;
//         sum += mark;
//     }
//     double avg = sum / 5.0;
//     cout << avg << endl;

//     return 0;
// }
