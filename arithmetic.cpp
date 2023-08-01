#include <iostream>
using namespace std;

int main() {
  int num1[4] = {1, 1, 1, 1};
  int num2[4] = {0, 0, 1, 0};
  int new_array[4] = {0};
  bool carry = false;
  for (int i = 0; i < 4; i++) {
    int add = num1[i] + num2[i];
    if (carry == true) {
      new_array[i] = 1 + add;
    } else {
      new_array[i] = add;
    }
    carry = false;
    if (new_array[i] > 1) {
      new_array[i] = 1;
      carry = true;
    }
  }
  for (int i = 0; i < 4; i++) {
    cout << new_array[i];
  }
  cout << endl;
  return 0;
}