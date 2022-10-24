#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;

struct Person {
  char name[50];
  int flavor;
};

class ADTQueue {
private:
  Person queue[SIZE];
  int head, tail;

public:
  ADTQueue() {
    tail = -1;
    head = 0;
  }

  bool empty() {
    if (head == head + 1)
      return true;
    else
      return false;
  }

  bool full() {
    if (tail == SIZE - 1)
      return true;
    else
      return false;
  }

  void append(Person pr) {
    if (!full()) {
      tail++;
      queue[tail] = pr;
    } else {
      std::cout << "Queue is Full" << std::endl;
      exit(EXIT_FAILURE);
    }
  }

  Person serve() {
    Person pr;
    if (!empty()) {
      pr = queue[head];
      head++;
      return pr;
    } else {
      std::cout << "Queue is Empty" << std::endl;
      exit(EXIT_FAILURE);
    }
  }
};

int main(int argc, char *argv[]) {
  Person p;
  ADTQueue q;
  std::cout << "Do you know that the flavor of ice-cream can revela one'spersonality?" << std::endl;
  std::cout << std::endl;
  for (int i = 0; i < 2; i++) {
    std::cout << "Enter name: ";
    std::cin >> p.name;
    std::cout << "Enter favorite flavor: " << std::endl;
    std::cout << "(1=chocolate 2=vanilla 3=strawberry 4=mixed flavor)" << std::endl;
    std::cin >> p.flavor;
    std::cout << std::endl;
  }

  return 0;
}
