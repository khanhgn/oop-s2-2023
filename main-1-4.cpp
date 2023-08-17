#include <iostream>

#include "Person.h"
#include "function-1-1.cpp"
#include "function-1-2.cpp"
#include "function-1-3.cpp"
#include "function-1-4.cpp"

using namespace std;

// extern Person* createPersonArray(int n);

int main() {
  PersonList list = createPersonList(5);
  PersonList shallowCopy = shallowCopyPersonList(list);
  cout << "Person list: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << list.people[i].name << " " << list.people[i].age << endl;
  }
  cout << "Person list deep copy:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << shallowCopy.people[i].name << " " << shallowCopy.people[i].age
         << endl;
  }
  delete[] shallowCopy.people;

  return 0;
}