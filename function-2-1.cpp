#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
  int decimal = stoi(decimal_number);
  string binary = "";
  while (decimal > 0) {
    binary = to_string(decimal % 2) + binary;
    decimal = decimal / 2;
  }
  cout << binary << endl;
}