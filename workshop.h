#include <iostream>
using namespace std;

void changeValue(double* ptr) { *ptr = 42; }

void printArray(double* array, int length) {
  for (int i = 0; i < length; i++) {
    cout << array[i] << endl;
  }
}

double arrayMax(double* array, int length) {
  int max = array[0];
  for (int i = 1; i < length; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

double* dynamicArray(int size, double number) {
  double* array = new double[size];
  for (int i = 0; i < size; i++) {
    array[i] = number;
  }
  return array;
}