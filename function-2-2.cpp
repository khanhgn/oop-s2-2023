#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
  int decimal = 0;
  for (int i = number_of_digits - 1; i > -1; i--) {
    decimal += binary_digits[i] * pow(2, number_of_digits - i - 1);
  }
  return decimal;
}