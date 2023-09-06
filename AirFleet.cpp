#include <iostream>
#include <string>
using namespace std;
#include "AirCraft.h"
#include "AirFleet.h"
#include "Airplane.h"
#include "Helicopter.h"

AirFleet::AirFleet() {
  fleet[5];
  fleet[0] = new Airplane(20, 10);
  fleet[1] = new Helicopter(10000, "BlackHawk");
  fleet[2] = new AirCraft(5000);
  fleet[3] = new Helicopter(100, "WhiteHawk");
  fleet[4] = new Airplane(15, 20);
};
/* creates an air fleet containing pointers to 5 AirCraft objects as an
 * array;
 */

AirCraft AirFleet::** get_fleet() {
  return fleet;
};  // returns the array of pointers to the five
    // aircraft objects