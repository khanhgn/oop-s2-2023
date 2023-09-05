#include <iostream>
using namespace std;
#include "house.h"

House::House() {
  current = 0;
  numAppliances = 0;
  appliances = new Appliance*[numAppliances];
};
House::House(int numAppliances) {
  current = 0;
  this->numAppliances = numAppliances;
  appliances = new Appliance*[numAppliances];
};
bool House::addAppliance(Appliance* appliance) {
  if (current <= sizeof(appliances)) {
    appliances[current] = appliance;
    current++;
    return true;
  }
  return false;
};
double House::getTotalPowerConsumption() {
  double totalPowerConsumption = 0;
  for (int i = 0; i < current; ++i) {
    totalPowerConsumption += appliances[i]->getPowerConsumption();
  }
  return totalPowerConsumption;
};

House::~House() {
  //   for (int i = 0; i < numAppliances; ++i) {
  //     delete appliances[i];
  //   }
  delete[] appliances;
}
