#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n) {
  int sum = 0;

  double falseReturn = 0.0;
  if (n < 1) {
    return double(falseReturn);
  }

  for (int i = 0; i < n; i++) {
    sum = sum + array[i] + secondarray[i];
  }
  return sum;
}