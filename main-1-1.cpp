#include <iostream>
using namespace std;

extern void print_matrix(int array[10][10]);

int main() {
  int array[10][10] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
  print_matrix(array);
  return 0;
}
