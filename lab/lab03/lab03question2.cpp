#include <iostream>
const int SIZE = 10;

class ADTStack {
private:
  int stack[SIZE];
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
  void push(int ch) {
    if (!full()) {
      topstack++;
      stack[topstack] = ch;
    } else {
      std::cout << "Stack is full" << std::endl;
      exit(EXIT_FAILURE);
    }
  }
  int pop() {
    int ch;
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
  int num, even = 0, odd = 0;

  std::cout << "Key in 10 numbers: ";
  for (int i = 0; i < SIZE; i++) {
    std::cin >> num;
    st.push(num);
    if (num % 2 == 0) {
      even += 1;
    } else {
      odd += 1;
    }
  }

  std::cout << "There are " << even << " even numbers and " << odd << " odd numbers." << std::endl;
  return 0;
}
