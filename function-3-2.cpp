#include <iostream>
using namespace std;

int median_array(int array[], int n) {
  double falseReturn = 0.0;
  if (n < 1 || n % 2 == 0) {
    return double(falseReturn);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (array[i] > array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  int median = array[n / 2];
  return median;
}