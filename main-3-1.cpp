#include <iostream>

#include "appliance.h"
#include "fridge.h"
#include "house.h"
#include "tv.h"

int main() {
  Fridge fridge(150, 9.5);
  TV tv(100, 55);

  House house(2);

  house.addAppliance(&fridge);
  house.addAppliance(&tv);

  double totalPowerConsumption = house.getTotalPowerConsumption();
  std::cout << "Total Power Consumption: " << totalPowerConsumption << " kWh"
            << std::endl;

  return 0;
}
