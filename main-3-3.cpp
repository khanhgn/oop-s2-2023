#include <iostream>
using namespace std;

double weighted_average(int array[], int n);
int main() {
  int n = 6;
  int array[6] = {1, 2, 1, 4, 1, 3};
  cout << weighted_average(array, n) << endl;
  return 0;
}
