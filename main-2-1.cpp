#include <iostream>
using namespace std;

extern int min_element(int array[], int n);
int main() {
  int n = 4;
  int array[4] = {203, 99, 22, 21};
  cout << min_element(array, 4) << endl;
  return 0;
}