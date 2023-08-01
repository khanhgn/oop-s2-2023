#include <string.h>

#include <iostream>
using namespace std;

void print_binary_str(string decimal_number) {
  int index = 0;
  int decimal = stoi(decimal_number);
  int vector[64];
  while (decimal > 0) {
    vector[index] = decimal % 2;
    decimal = decimal / 2;
    index++;
  }
  for (int i = index - 1; i > -1; i--) {
    cout << vector[i];
  }
  cout << endl;
}