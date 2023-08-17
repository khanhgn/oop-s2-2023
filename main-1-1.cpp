#include <iostream>

#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main() {
  Person* list = createPersonArray(5);
  for (int i = 0; i < 5; i++) {
    cout << list[i].name << " " << list[i].age << endl;
  }
  delete[] list;
  return 0;
}