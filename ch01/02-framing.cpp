#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  // Build message
  const std::string greeting = "Hello, " + name + "!";

  // Build the second and fourth lines
  const std::string spaces(greeting.size(), ' ');
  const std::string second = "* " + spaces + " *";

  // Build first and fifth lines
  const std::string first(second.size(), '*');

  // Write output
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}
