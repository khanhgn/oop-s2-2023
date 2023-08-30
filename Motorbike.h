#include <iostream>
using namespace std;
#include "Vehicle.h"
class Motorbike : public Vehicle {
 public:
  Motorbike(int ID) : Vehicle(ID){};
  int getParkingDuration();
};
