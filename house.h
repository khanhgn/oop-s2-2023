#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
using namespace std;
#include "appliance.h"

class House {
 private:
  int current;
  int numAppliances;
  Appliance** appliances;

 public:
  House();
  House(int numAppliances);
  bool addAppliance(Appliance* appliance);
  double getTotalPowerConsumption();
  ~House();
};
#endif