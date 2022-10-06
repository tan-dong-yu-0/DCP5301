// // question2
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  int userInput;
  std::string result = "";
  do {

    std::cout << "Type a number (0 to exit): ";
    std::cin >> userInput;
    result = (userInput % 2 == 0) ? " is even." : " is odd.";
    if (userInput == 0) {
      std::cout << "Thank you." << std::endl;
      break;
    }
    std::cout << userInput << " is " << result << std::endl;
  } while (userInput != 0);
  return 0;
}
