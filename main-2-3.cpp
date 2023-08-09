#include <iostream>
using namespace std;

extern int sum_integers(int integers[], int length);

int main() {
  int array[4] = {-1, 2, 2, -1};
  int length = 4;
  cout << sum_integers(array, length) << endl;
  return 0;
}
