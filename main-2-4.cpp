#include <iostream>
#include <string>
using namespace std;

extern int sum_min_max(int intergers[], int length);
int main() {
  int intergers[4] = {2, 1, 1, 2};
  cout << sum_min_max(intergers, 4) << endl;
  return 0;
}