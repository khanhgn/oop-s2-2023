#include <iostream>
using namespace std;
#include "tv.h"

TV::TV() { screenSize = 0; };
TV::TV(int powerRating, double screenSize)
    : Appliance(powerRating), screenSize(screenSize){};
double TV::getScreenSize() { return screenSize; };
void TV::setScreenSize(double screenSize) { this->screenSize = screenSize; };
double TV::getPowerConsumption() {
  return powerRating * 24 * (screenSize / 100);
};
