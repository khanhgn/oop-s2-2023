#include <iostream>

#include "fridge.h"

int main() {
  Fridge fridge(150, 200);  // Create a fridge with a power rating of 150 and a
                            // volume of 200 liters

  std::cout << "Fridge Power Rating: " << fridge.get_powerRating() << " watts"
            << std::endl;
  std::cout << "Fridge Volume: " << fridge.getVolume() << " liters"
            << std::endl;
  std::cout << "Fridge Power Consumption: " << fridge.getPowerConsumption()
            << " kWh per day" << std::endl;

  return 0;
}
