#include <iostream>
using namespace std;
extern int median_array(int array[], int n);
int main() {
  int n = 9;
  int array[9] = {1, 2, 4, 5, 3, 7, 9, 11};
  std::cout << median_array(array, n) << std::endl;
  return 0;
}