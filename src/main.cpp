#include <iostream>

int addNumbers(int a, int b) { return a + b; }

int multiplyNumbers(int a, int b) { return a * b; }

int main() {
  int first_number = {3};
  int second_number = {5};

  std::cout << "First number: " << first_number << "\n";
  std::cout << "Second number: " << second_number << "\n";

  int sum = addNumbers(first_number, second_number);
  std::cout << "Sum: " << sum << "\n";

  int product = multiplyNumbers(first_number, second_number);
  std::cout << "Product: " << product << "\n";

  int age = -1;
  std::string name = "";

  std::cout << "Please enter your name: " << "\n";
  std::cin >> name;

  std::cout << "Please enter your age: " << "\n";
  std::cin >> age;

  std::cout << "Hello, " << name << "! You are " << age << " years old.\n";

  return 0;
}