#include <iostream>
using namespace std;
#include "Vehicle.h"
class Car : public Vehicle {
 public:
  Car(int ID) : Vehicle(ID){};
  int getParkingDuration();
};