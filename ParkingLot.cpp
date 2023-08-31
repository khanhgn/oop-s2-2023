#include "ParkingLot.h"

#include <iostream>
ParkingLot::ParkingLot() {
  vehicles = new Vehicle[max];
  max = 0;
  current = 0;
};
ParkingLot::ParkingLot(int max) {
  this->max = max;
  vehicles = new Vehicle[max];
  current = 0;
};
bool ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (current < max) {
    vehicles[current] = *vehicle;
    current++;
    return true;
  }
  cout << "The lot is full" << endl;
  return false;
};
void ParkingLot::unparkVehicle(int ID) {
  bool removed = false;
  for (int i = 0; i < current; i++) {
    if (vehicles[i].getID() == ID) {
      for (int j = i; j < current - 1; j++) {
        vehicles[j] = vehicles[j + 1];
      }
      removed = true;
    }
  }
  if (removed == true) {
    current--;
  } else {
    cout << "Vehicle not in the lot" << endl;
  }
};
int ParkingLot::getCount() { return current; };
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
  int numberOverstay = 0;
  if (current < max) {
    for (int i = 0; i < current; i++) {
      if (vehicles[i].getParkingDuration() >= maxParkingDuration) {
        numberOverstay++;
      }
    }
  } else if (current == max) {
    for (int i = 0; i < current; i++) {
      if (vehicles[i].getParkingDuration() >= maxParkingDuration) {
        numberOverstay++;
      }
      numberOverstay--;
    }
  }
  return numberOverstay;
};

ParkingLot ::~ParkingLot() { delete[] vehicles; };