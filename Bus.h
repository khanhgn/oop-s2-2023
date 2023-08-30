#include <iostream>
using namespace std;
#include "Vehicle.h"

class Bus : public Vehicle {
 public:
  Bus(int ID) : Vehicle(ID){};
  int getParkingDuration();
};