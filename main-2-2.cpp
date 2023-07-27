#include <iostream>
using namespace std;

extern int max_element(int array[], int n);
int main() {
  int n = 4;
  int array[4] = {203, 99, 22, 21000};
  cout << max_element(array, 4) << endl;
  return 0;
}