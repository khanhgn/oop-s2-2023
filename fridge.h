#ifndef FRIDGE_H
#define FRIDGE_H
#include <iostream>
using namespace std;
#include "appliance.h"

class Fridge : public Appliance {
 private:
  double volume;

 public:
  Fridge();
  Fridge(int powerRating, double volume);
  double getVolume();
  void setVolume(double volume);
  double getPowerConsumption();
};
#endif