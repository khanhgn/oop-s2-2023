#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);
int main() {
  int n = 4;
  int array[4] = {1, 2, 2, 2};
  std::cout << num_count(array, 4, 2) << std::endl;
  return 0;
}