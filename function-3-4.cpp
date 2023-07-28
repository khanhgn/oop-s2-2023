#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
  if ('A' > grade || grade > 'E') {
    cout << "nothing" << endl;
  }
  switch (grade) {
    case 'A':
      cout << "Pass" << endl;
      break;
    case 'B':
      cout << "Pass" << endl;
      break;
    case 'C':
      cout << "Pass" << endl;
      break;
    case 'D':
      cout << "Fail" << endl;
      break;
    case 'E':
      cout << "Fail" << endl;
      break;
  }
}