#include <iostream>
using namespace std;

class Vehicle {
 protected:
  time_t timeOfEntry;
  int ID;

 public:
  Vehicle();
  Vehicle(int ID);
  int getID();
};

class Car : public Vehicle {
 public:
  Car(int ID);
  int getParkingDuration();
};

class Bus : public Vehicle {
 public:
  Bus(int ID);
  int getParkingDuration();
};

class Motorbike : public Vehicle {
 public:
  Motorbike(int ID);
  int getParkingDuration();
};
