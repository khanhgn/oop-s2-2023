#include <iostream>
extern int array_sum(int array[], int n);
int main() {
  int n = 2;
  int array[2] = {1, 2};
  std::cout << array_sum(array, 2) << std::endl;
  return 0;
}