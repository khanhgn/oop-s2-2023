#include <iostream>
extern double array_mean(int array[], int n);
int main() {
  int n = 0;
  int array[2] = {1, 2};
  std::cout << array_mean(array, n) << std::endl;
  return 0;
}