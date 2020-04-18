#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";

  // Define name
  std::string name;
  // Read name from console into name var
  std::cin >> name;

  // Greet the name
  std::cout << "Hello " << name << "!" << std::endl;

  return 0;
}
