#include <iostream>

int addNumbers(int a, int b) {
  return a + b;
}

int multiplyNumbers(int a, int b) {
  return a * b;
}

int main() {
  int first_number = {3};
  int second_number = {5};
  auto lang = "C++";
  std::cout << "Hello and welcome to " << lang << "!\n";

  for (int i = 1; i <= 5; i++) {
    std::cout << "i = " << i << std::endl;
  }

  std::cout << "First number: " << first_number << "\n";
  std::cout << "Second number: " << second_number << "\n";

  int sum = addNumbers(first_number, second_number);
  std::cout << "Sum: " << sum << "\n";

  int product = multiplyNumbers(first_number, second_number);
  std::cout << "Product: " << product << "\n";
  
  return 0;
}
