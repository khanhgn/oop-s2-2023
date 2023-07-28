#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);
int main() {
  int n = 9;
  double array[9] = {1, 2, 4, 5, 3, 7, 9, 11};
  std::cout << sum_even(array, n) << std::endl;
  return 0;
}
