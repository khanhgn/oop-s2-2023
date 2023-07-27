#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);
int main() {
  int n = 4;
  int array[4] = {4, 3, 2, 1};
  cout << is_descending(array, 4) << endl;
  return 0;
}