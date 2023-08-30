#include <iostream>

#include "header.h"
using namespace std;

int Car::getParkingDuration() { return Vehicle::getParkingDuration() * 0.9; };