#include <iostream>
#include <string>
using namespace std;
#include "AirCraft.h"
#include "AirFleet.h"
#include "Airplane.h"
#include "Helicopter.h"

AirFleet() {
  Airplane* a1;
  a1 = new Airplane(20, 10);
  Helicopter(10000, "BlackHawk");
  AirCraft(5000);
  Helicopter(100, "WhiteHawk");
  Airplane(15, 20);
};
/* creates an air fleet containing pointers to 5 AirCraft objects as an
 * array;
 */

AirCraft AirFleet::** get_fleet() {
  return;
};  // returns the array of pointers to the five
    // aircraft objects