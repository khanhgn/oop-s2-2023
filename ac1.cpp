#include <iostream>
using namespace std;

int main() {
  int decimal = 75;
  int index = 0;
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

  return 0;
}