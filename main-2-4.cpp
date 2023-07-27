#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);
int main() {
  int n = 4;
  int array[4] = {4, 2, 22, 21000};
  cout << is_ascending(array, 4) << endl;
  return 0;
}