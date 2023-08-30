#include <iostream>

#include "header.h"
using namespace std;

Vehicle::Vehicle() {
  ID = 0;
  timeOfEntry = time(0);
};
Vehicle::Vehicle(int ID) {
  this->ID = ID;
  timeOfEntry = time(0);
};
int Vehicle::getID() { return ID; };