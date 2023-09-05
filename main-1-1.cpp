#include <iostream>

#include "header.h"  // Assuming your header file is named "header.h"

using namespace std;

int main() {
  // Create an Appliance object with a power rating of 1000 watts
  Appliance appliance1(1000);

  // Check if the appliance is initially turned on or off
  if (appliance1.get_isOn()) {
    cout << "The appliance is initially turned on." << endl;
  } else {
    cout << "The appliance is initially turned off." << endl;
  }

  // Turn on the appliance
  appliance1.turnOn();
  cout << "Appliance turned on." << endl;

  // Check the power rating of the appliance
  cout << "Power Rating: " << appliance1.get_powerRating() << " watts" << endl;

  // Calculate and display the power consumption
  double powerConsumption = appliance1.getPowerConsumption();
  cout << "Power Consumption: " << powerConsumption << " kWh" << endl;

  // Turn off the appliance
  appliance1.turnOff();
  cout << "Appliance turned off." << endl;

  // Check if the appliance is now turned off
  if (appliance1.get_isOn()) {
    cout << "The appliance is still on." << endl;
  } else {
    cout << "The appliance is now turned off." << endl;
  }

  return 0;
}
