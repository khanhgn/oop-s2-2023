#ifndef AIRFLEET_H
#define AIRFLEET_H
#include <iostream>
#include <string>
using namespace std;
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
 public:
  AirFleet();
  AirCraft **fleet;
  /* creates an air fleet containing pointers to 5 AirCraft objects as an
   * array;
   */

  AirCraft **get_fleet();  // returns the array of pointers to the five
                           // aircraft objects
  ~AirFleet();
};

#endif