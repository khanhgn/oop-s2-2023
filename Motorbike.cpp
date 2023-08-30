#include <iostream>

#include "header.h"
using namespace std;

int Motorbike::getParkingDuration() { return Vehicle::getParkingDuration() * 0.85; };