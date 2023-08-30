#include "Bus.h"

#include <iostream>

#include "Vehicle.h"
using namespace std;

int Bus::getParkingDuration() { return Vehicle::getParkingDuration() * 0.75; };