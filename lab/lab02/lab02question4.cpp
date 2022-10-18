#include <iostream>

void add(int &r, int v) {
  r = r + 5;
  v = v + 5;
}

int main(int argc, char *argv[]) {
  int x, y;
  add(x, y);
  return 0;
}
