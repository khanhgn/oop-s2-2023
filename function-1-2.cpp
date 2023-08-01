#include <iostream>
using namespace std;

int is_identity(int array[10][10]) {
  bool isTrue = false;
  bool isDiagonal = false;
  bool isZero = false;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j) {
        if (array[i][j] == 1) {
          isTrue = true;
        }
      } else {
        if (array[i][j] == 1) {
          isTrue = true;
        }
      }
    }
  }
  return isTrue;
}