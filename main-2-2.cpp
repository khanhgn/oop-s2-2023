#include <iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
  int array[4] = {1, 0, 0, 0};
  int length = 4;
  cout << bin_to_int(array, length) << endl;
  return 0;
}
