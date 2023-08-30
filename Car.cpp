#include "Car.h"

#include <iostream>

#include "Vehicle.h"
using namespace std;

int Car::getParkingDuration() { return Vehicle::getParkingDuration() * 0.9; };