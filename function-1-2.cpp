#include <iostream>
using namespace std;

int is_identity(int array[10][10]) {
  bool isTrue = false;
  bool isDiagonal = false;
  bool isZero = false;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (i == j) {
        if (array[i][j] == 1) {
          isDiagonal = true;
        }
      } else {
        if (array[i][j] == 0) {
          isZero = true;
        }
      }
    }
  }
  if (isZero == true || isDiagonal == true) {
    isTrue = true;
  }
  return isTrue;
}