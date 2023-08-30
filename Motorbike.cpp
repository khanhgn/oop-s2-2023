#include "Motorbike.h"

#include <iostream>

#include "Vehicle.h"
using namespace std;

int Motorbike::getParkingDuration() {
  return Vehicle::getParkingDuration() * 0.85;
};