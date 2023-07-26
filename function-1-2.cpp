#include <iostream>

double array_mean(int array[], int n) {
  int sum = 0;
  double falseReturn = 0.0;
  double avg = 0;
  if (n < 1) {
    return double(falseReturn);
  }
  for (int i = 0; i < n; i++) {
    sum = sum + array[i];
  }
  avg = double(sum) / n;
  return avg;
}