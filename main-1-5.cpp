#include <iostream>
using namespace std;

extern int count_evens(int number);
int main() {
  int number = 2;

  std::cout << count_evens(number) << std::endl;
  return 0;
}