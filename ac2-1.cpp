#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int base8 = 1346742;
  int index = 0;
  int decimal = 0;
  int digit;
  while (base8 > 0) {
    digit = base8 % 8;
    decimal += digit * pow(8, index);
    base8 = base8 / 8;
    index++;
  }
  cout << decimal << endl;

  return 0;
}