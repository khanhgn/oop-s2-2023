#include <iostream>

#include "header.h"
using namespace std;

Car::Car(int ID)
    : Vehicle(ID){

      };
int Car::getParkingDuration() { return (time(0) - timeOfEntry) * 0.9; };