#include <iostream>
using namespace std;

int *readNumbers() {
  int *numbers = new int[2];
  for (int i = 0; i < 2; i++) {
    cout << "enter number: ";
    cin >> numbers[i];
  }
  cout << endl;
  return numbers;
}

int *reverseArray(int *numbers1, int length) {
  int *reversed = new int[length];
  for (int i = 0; i < length; i++) {
    reversed[i] = numbers1[length - i - 1];
  }
  return reversed;
}

bool equalsArray(int *numbers1, int *numbers2, int length) {
  if (length < 1) {
    return false;
  }
  for (int i = 0; i < length; i++) {
    if (numbers1[i] != numbers2[i]) {
      return false;
    }
  }
  return true;
}
