#include <cmath>
#include <iostream>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits) {
  int decimal = 0;
  for (int i = number_of_digits - 1; i > -1; i--) {
    decimal += pow(i, 2);
  }
  return decimal;
}