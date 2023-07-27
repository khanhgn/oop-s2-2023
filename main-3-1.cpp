#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);
int main() {
  int n = 4;
  int array[4] = {1, 2, 2, 1};
  std::cout << is_fanarray(array, n) << std::endl;
  return 0;
}