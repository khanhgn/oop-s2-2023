#include <iostream>

#include "Person.h"
#include "function-1-1.cpp"
#include "function-1-2.cpp"
using namespace std;

// extern Person* createPersonArray(int n);

int main() {
  PersonList list = createPersonList(5);
  for (int i = 0; i < 5; i++) {
    cout << list.people[i].name << " " << list.people[i].age << endl;
  }
  delete[] list.people;
  return 0;
}