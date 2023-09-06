#include <iostream>
#include <string>
using namespace std;
#include "Airplane.h"

Airplane::Airplane(){};
Airplane::Airplane(int w, int p) {
  weight = w;
  numPassengers = p;
};  // Create Airplane with weight w and passengers p
void Airplane::reducePassengers(int x) {
  numPassengers--;
  if (numPassengers < 0) {
    numPassengers = 0;
  }
};  // reduce passenger list by x
int Airplane::get_numPassengers() { return numPassengers; };
void Airplane::fly(int headwind, int minutes) {
  int ogFuel = fuel;
  if (headwind >= 60) {
    fuel = fuel - (0.5 * minutes) - (0.001 * numPassengers * minutes);
  } else if (headwind < 60) {
    fuel = fuel - (0.2 * minutes) - (0.001 * numPassengers * minutes);
  }
  if (fuel < 20) {
    fuel = ogFuel;
  } else if (fuel >= 20) {
    numberOfFlights++;
  }
};