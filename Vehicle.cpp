#include "Vehicle.h"

#include <iostream>
using namespace std;

Vehicle::Vehicle(int ID) {
  this->ID = ID;
  timeOfEntry = time(0);
};
int Vehicle::getID() { return ID; };

int Vehicle::getParkingDuration() { return (time(0) - timeOfEntry); }