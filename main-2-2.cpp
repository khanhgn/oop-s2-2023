#include <iostream>

#include "tv.h"

int main() {
  // Create a TV object with a power rating of 100 watts and a screen size of 42
  // inches
  TV tv(100, 42.0);

  // Display TV information
  std::cout << "TV Power Rating: " << tv.get_powerRating() << " watts"
            << std::endl;
  std::cout << "TV Screen Size: " << tv.getScreenSize() << " inches"
            << std::endl;
  std::cout << "TV Power Consumption: " << tv.getPowerConsumption()
            << " kWh per day" << std::endl;

  return 0;
}
