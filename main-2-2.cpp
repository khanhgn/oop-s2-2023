#include <iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
  int array[6] = {1, 1, 1, 1, 0, 1};
  int length = 6;
  cout << bin_to_int(array, length) << endl;
  return 0;
}
