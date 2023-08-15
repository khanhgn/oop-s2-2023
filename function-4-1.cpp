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

int secondSmallestSum(int *numbers, int length) {
  int smallest = 2147483647;
  int second = 2147483647;
  int start = 0;
  for (int i = 0; i < length; i++) {
    int current = 0;
    for (int j = i; j < length; j++) {
      current += numbers[j];
      if (current <= smallest) {
        second = smallest;
        smallest = current;
      } else if (current < second) {
        second = current;
      }
    }
  }
  return second;
}