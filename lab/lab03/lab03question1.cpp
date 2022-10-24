#include <iostream>
const int SIZE = 5;

class ADTStack {
private:
  char stack[SIZE];
  int topstack;

public:
  ADTStack() { topstack = -1; }
  bool empty() {
    if (topstack == -1)
      return true;
    else
      return false;
  }
  bool full() {
    if (topstack == SIZE - 1)
      return true;
    else
      return false;
  }
  void push(char ch) {
    if (!full()) {
      topstack++;
      stack[topstack] = ch;
    } else {
      std::cout << "Stack is full" << std::endl;
      exit(EXIT_FAILURE);
    }
  }
  char pop() {
    char ch;
    if (!empty()) {
      ch = stack[topstack];
      topstack--;
      return ch;
    } else {
      std::cout << "Stack is empty" << std::endl;
      exit(EXIT_FAILURE);
    }
  }
};

int main(int argc, char *argv[]) {
  ADTStack st;
  char ch;

  std::cout << "Key in five characters: ";
  for (int i = 0; i < SIZE; i++) {
    std::cin >> ch;
    st.push(ch);
  }

  std::cout << "The reverse order is: " << std::endl;
  while (!st.empty()) {
    std::cout << st.pop() << " ";
  }
  std::cout << std::endl;

  return 0;
}
