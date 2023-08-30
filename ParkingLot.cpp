#include "ParkingLot.h"

#include <iostream>
ParkingLot::ParkingLot() {
  vehicles[0];
  max = 0;
  current = 0
};
ParkingLot::ParkingLot(int max) {
  this->max = max;
  vehicles[max];
  current = 0;
};
bool ParkingLot::parkVehicle(Vehicle vehicle) {
  if (current < max) {
    vehicles[current] = vehicle;
    return true;
  }
  return false;
};
void ParkingLot::unparkVehicle(int ID) {
  for (int i = 0; i < current; i++) {
    if (vehicles[i].getID() == ID) {
      delete vehicles[i];
      cout << "Unparked";
    }
    break;
  }
  cout << "Vehicle not in the lot" << endl;
};