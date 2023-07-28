#include <iostream>
using namespace std;

double sum_even(double array[], int n) {
  if (n < 1) {
    return 0;
  }
  int sum = array[1];
  for (int i = 1; i < n; i++) {
    if (i % 2 == 0) {
      sum += array[i];
    }
  }
  return sum;
}
