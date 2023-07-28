#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);
int main() {
  int n = 5;
  int array[] = {1, 2, 1, 2, 1};
  std::cout << is_fanarray(array, n) << std::endl;
  return 0;
}