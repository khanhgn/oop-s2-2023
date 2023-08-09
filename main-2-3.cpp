#include <iostream>
using namespace std;

extern int sum_integers(int integers[], int length);

int main() {
  int array[3] = {0, 1, 0};
  int length = 3;
  cout << sum_integers(array, length) << endl;
  return 0;
}
