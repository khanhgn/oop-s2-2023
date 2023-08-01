#include <iostream>
using namespace std;

extern int count_digits(int array[4][4]);

int main() {
  int array[4][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {1, 2, 3, 4}, {1, 2, 3, 4}};
  count_digits(array);
  return 0;
}