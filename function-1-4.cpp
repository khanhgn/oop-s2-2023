#include <string>

#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
  PersonList shallow;
  shallow.numPeople = pl.numPeople;
  shallow.people = pl.people;
  return shallow;
}