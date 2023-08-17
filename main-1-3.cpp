#include <iostream>

#include "Person.h"

using namespace std;

// extern PersonList deepCopyPersonList(PersonList pl);
// extern PersonList createPersonList(int n);

int main() {
  PersonList list = createPersonList(5);
  PersonList deepCopy = deepCopyPersonList(list);
  cout << "Person list: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << list.people[i].name << " " << list.people[i].age << endl;
  }
  cout << "Person list deep copy:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << deepCopy.people[i].name << " " << deepCopy.people[i].age << endl;
  }
  delete[] deepCopy.people;
  delete[] list.people;

  return 0;
}