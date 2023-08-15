#include <iostream>
using namespace std;

extern int secondSmallestSum(int *numbers, int length);
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main() {
  int *array = readNumbers();
  cout << secondSmallestSum(array, 10) << endl;
  return 0;
}