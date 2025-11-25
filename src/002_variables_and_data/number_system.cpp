#include <iostream>

int main() {
  int number1 = 15;     // Decimal
  int number2 = 017;    // Octal
  int number3 = 0x0F;   // Hexadecimal
  int number4 = 0b1111; // Binary

  std::cout << "Decimal: " << number1 << std::endl;
  std::cout << "Octal: " << number2 << std::endl;
  std::cout << "Hexadecimal: " << number3 << std::endl;
  std::cout << "Binary: " << number4 << std::endl;

  return 0;
}
