#include <iostream>

#include "workshop.h"
using namespace std;

int main() {
  int size = 4;
  double number = 7;
  cout << *dynamicArray(size, number);
  return 0;
}