#ifndef TV_H
#define TV_H
#include <iostream>
using namespace std;
#include "appliance.h"

class TV : public Appliance {
 private:
  double screenSize;

 public:
  TV();
  TV(int powerRating, double screenSize);
  double getScreenSize();
  void setScreenSize(double screenSize);
  double getPowerConsumption();
};
#endif
