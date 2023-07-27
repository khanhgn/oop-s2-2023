#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n) {
  bool condition = false;
  bool asCondition = false;
  bool desCondition = false;
  if (n < 1) {
    return condition;
  }
  for (int i = 1; i < n / 2; i++) {
    if (array[i - 1] < array[i]) {
      asCondition = true;
    }
  }
  for (int i = n / 2 + 1; i < n; i++) {
    if (array[i - 1] > array[i]) {
      desCondition = true;
    }
  }
  if (desCondition == 1 && asCondition == 1) {
    condition = true;
  }
  return condition;
}
