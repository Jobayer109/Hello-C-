#include <iostream>

// Summation
float sum(int num1, int num2) {
  int sum_res = num1 + num2;
  std::cout << sum_res << "\n";
  return sum_res;
}

// Subtraction
float sub(int num1, int num2) {
  if (num1 > num2) {
    int sub_res = num1 - num2;
    std::cout << sub_res << "\n";
    return sub_res;
  } else {
    std::cout << "num1 must be greater than num2 \n";
    return 0;
  }
}

// Multiplication
float mul(int num1, int num2) {
  if (num1 == !0 || num2 == !0) {
    int mul_res = num1 * num2;
    std::cout << mul_res << "\n";
    return mul_res;
  } else {
    std::cout << "num1 and num2 must not be 0 \n";
    return 0;
  }
}
// Division
float division(int num1, int num2) {
  if (num2 != 0) {
    int div_res = num1 / num2;
    std::cout << div_res << "\n";
    return div_res;
  } else {
    std::cout << "num2 must not be 0 \n";
    return 0;
  }
}

// Modulus
float mod(int num1, int num2) {
  if (num2 != 0) {
    int mod_res = num1 % num2;
    std::cout << mod_res << "\n";
    return mod_res;
  } else {
    std::cout << "num2 can't be 0 \n";
    return 0;
  }
}

int main() {
  // Summation
  sum(12, 15); // 27
  // Subtraction
  sub(160, 100); // 60
  sub(16, 100);  // num1 must be greater than num2
  // Multiplication
  mul(15, 0); // num1 and num2 must not be 0
  mul(15, 3); // num1 and num2 must not be 0
  // Division
  division(12, 0); // num2 must not be 0
  division(12, 2); // 6

  // Modulus
  mod(10, 3);
}