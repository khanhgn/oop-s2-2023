#include <iostream>

#include "header.h"
using namespace std;

int Bus::getParkingDuration() { return Vehicle::getParkingDuration() * 0.75; };