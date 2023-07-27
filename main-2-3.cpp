#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n);
int main() {
  int n = 4;
  int array[4] = {2, 9, 2, 5};
  two_five_nine(array, 4);
  return 0;
}