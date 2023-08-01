#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int binary = 110111011;
  int index = 0;
  int decimal = 0;
  int digit;
  while (binary > 0) {
    digit = binary % 10;
    decimal += digit * pow(2, index);
    binary = binary / 10;
    index++;
  }
  cout << decimal << endl;

  return 0;
}