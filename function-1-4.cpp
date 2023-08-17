#include <string>

#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
  PersonList shallow;
  shallow.numPeople = pl.numPeople;
  for (int i = 0; i < shallow.numPeople; i++) {
    shallow.people[i].name = pl.people[i].name;
    shallow.people[i].age = pl.people[i].age;
  }
  return shallow;
}