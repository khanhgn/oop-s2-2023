#include <iostream>
using namespace std;

int *readNumbers() {
  int *numbers = new int[10];
  for (int i = 0; i < 10; i++) {
    cout << "enter number: ";
    cin >> numbers[i];
  }
  cout << endl;
  return numbers;
}

void printNumbers(int *numbers, int length) {
  for (int i = 0; i < 10; i++) {
    cout << i << " ";
    cout << numbers[i] << endl;
  }
}