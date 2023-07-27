#include <iostream>
using namespace std;

void two_five_nine(int array[], int n) {
  int counter_2 = 0;
  int counter_5 = 0;
  int counter_9 = 0;
  if (n < 1) {
    cout << "2:0;5:0;9:0;\n";
  }
  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2:
        counter_2 = counter_2 + 1;
        break;
      case 5:
        counter_5 = counter_5 + 1;
        break;
      case 9:
        counter_9 = counter_9 + 1;
        break;
    }
  }
  cout << "2:" << counter_2 << ";5:" << counter_5 << ";9:" << counter_9 << ";"
       << endl;
}