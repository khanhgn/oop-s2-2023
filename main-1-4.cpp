#include <iostream>

#include "Person.h"
#include "function-1-2.cpp"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);

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
  delete[] list.people;

  return 0;
}