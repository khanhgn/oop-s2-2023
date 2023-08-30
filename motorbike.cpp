#include <iostream>

#include "header.h"
using namespace std;

int Motorbike::getParkingDuration() { return (time(0) - timeOfEntry) * 0.85; };