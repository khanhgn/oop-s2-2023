#include "ParkingLot.h"

#include <iostream>
ParkingLot::ParkingLot() {
  vehicles = new Vehicle*[max];
  max = 0;
  current = 0;
};
ParkingLot::ParkingLot(int max) {
  this->max = max;
  vehicles = new Vehicle*[max];
  current = 0;
};
bool ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (current < max) {
    vehicles[current] = vehicle;
    current++;
    return true;
  }
  cout << "The lot is full" << endl;
  return false;
};
void ParkingLot::unparkVehicle(int ID) {
  for (int i = 0; i < current; i++) {
    if (vehicles[i]->getID() == ID) {
      delete vehicles[i];
      return;
    }
  }
  cout << "Vehicle not in the lot" << endl;
};
int ParkingLot::getCount() { return current; };

ParkingLot ::~ParkingLot() { delete[] vehicles; }