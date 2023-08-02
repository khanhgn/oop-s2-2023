#include <iostream>
#include <string>
using namespace std;

extern int sum_if_palindrome(int intergers[], int length);

int main() {
  int intergers[4] = {2, 1, 1, 2};
  cout << sum_if_palindrome(intergers, 4) << endl;
  return 0;
}