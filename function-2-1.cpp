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
    cout << numbers[i] << " ";

    if (numbers[i] < 10) {
      cout << numbers[i] << " ";
    }
    switch (numbers[i]) {
      case 10:
        cout << "A";
        break;
      case 11:
        cout << "B";
        break;
      case 12:
        cout << "C";
        break;
      case 13:
        cout << "D";
        break;
      case 14:
        cout << "E";
        break;
      case 15:
        cout << "F";
        break;
    }
    cout << endl;
  }
}