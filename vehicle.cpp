#include <iostream>

#include "header.h"
using namespace std;

Vehicle::Vehicle(int ID) {
  this->ID = ID;
  timeOfEntry = time(0);
};
int Vehicle::getID() { return ID; };

int Vehicle::getParkingDuration() { return (time(0) - timeOfEntry); }