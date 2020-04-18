#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  // Build message
  const std::string greeting = "Hello, " + name + "!";

  // Blanks surrounding the greeting
  const int pad = 1;

  // Total rows to write
  const int rows = pad * 2 + 3;

  // Separate input from output - write an empty row
  std::cout << std::endl;;

  // Rows of output
  int r = 0;

  // while num output rows is not totoal rows
  // write another empty row and increment row number
  while (r != rows) {
    std::cout << std::endl;
    ++r;
  }
  

  return 0;
}
