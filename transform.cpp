#include <iostream>
#include <string>
using namespace std;

int main() {
  int decimal = 75;
  string binary = "";
  while (decimal > 0) {
    binary = to_string(decimal % 2) + binary;
    decimal = decimal / 2;
  }
  cout << binary << endl;
  return 0;
}