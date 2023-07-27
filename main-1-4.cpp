#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
  int n = 4;
  int array[4] = {1, 2, 2, 2};
  int secondarray[4] = {1, 2, 2, 2};

  std::cout << sum_two_arrays(array, secondarray, 4) << std::endl;
  return 0;
}