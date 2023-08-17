#include <string>

#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl) {
  PersonList peopleList2;
  peopleList2.numPeople = pl.numPeople;
  peopleList2.people = new Person[peopleList2.numPeople];
  for (int i = 0; i < peopleList2.numPeople; i++) {
    peopleList2.people[i].name = pl.people[i].name;
    peopleList2.people[i].age = pl.people[i].age;
  }
  return peopleList2;
}