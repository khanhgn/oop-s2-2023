#include <iostream>
using namespace std;

class Vehicle {
 protected:
  time_t timeOfEntry;
  int ID;

 public:
  Vehicle(int ID);
  int getID();
  virtual int getParkingDuration();
};
