#include <iostream>

#include "header.h"
using namespace std;

int Bus::getParkingDuration() { return (time(0) - timeOfEntry) * 0.75; };