#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);
int main() {
  char grade = 'C';
  print_pass_fail(grade);
  return 0;
}
