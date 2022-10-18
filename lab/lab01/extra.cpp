#include <iostream>
using namespace std;
int main() {
  int i, j, rowNum, space;
  cout << "Enter the Number of Rows: ";
  cin >> rowNum;

  space = rowNum - 1;
  for (i = 1; i <= rowNum; i++) {

    for (j = 1; j <= space; j++)
      cout << " ";

    space--;

    for (j = 1; j <= i; j++)
      cout << "* ";

    cout << endl;
  }
  space = 1;
  for (i = 1; i <= rowNum - 1; i++) {

    for (j = 1; j <= space; j++)
      cout << " ";
    space++;
    for (j = 1; j <= rowNum - i; j++)
      cout << "* ";
    cout << endl;
  }
  cout << endl;
  return 0;
}
