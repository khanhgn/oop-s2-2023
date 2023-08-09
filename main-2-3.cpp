#include <iostream>
using namespace std;

extern int sum_integers(int integers[], int length);

int main() {
  int array[6] = {1, 2, 0, 0, 2, 1};
  int length = 6;
  cout << sum_integers(array, length) << endl;
  return 0;
}
