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

class Car : public Vehicle {
 public:
  Car(int ID) : Vehicle(ID){};
  int getParkingDuration();
};

class Bus : public Vehicle {
 public:
  Bus(int ID) : Vehicle(ID){};
  int getParkingDuration();
};

class Motorbike : public Vehicle {
 public:
  Motorbike(int ID) : Vehicle(ID){};
  int getParkingDuration();
};
