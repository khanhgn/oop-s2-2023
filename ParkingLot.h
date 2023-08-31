#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <iostream>

#include "Vehicle.h"

class ParkingLot {
 private:
  Vehicle* vehicles;
  int max;
  int current;

 public:
  ParkingLot();
  ParkingLot(int max);
  int getCount();
  bool parkVehicle(Vehicle* vehicle);
  void unparkVehicle(int ID);
  ~ParkingLot();
};
#endif