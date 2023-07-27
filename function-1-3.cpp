#include <iostream>
using namespace std;

int num_count(int array[], int n, int number) {
  int count = 0;
  double falseReturn = 0.0;
  if (n < 1) {
    return double(falseReturn);
  }
  for (int i = 0; i < n; i++) {
    if (array[i] == number) {
      count = count + 1;
    }
  }
  return count;
}