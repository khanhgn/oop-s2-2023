#include "AirCraft.h"

#include <iostream>
AirCraft::AirCraft(){};
AirCraft::AirCraft(int w) {
  weight = w;
  fuel = 100;
  numberOfFlights = 0;
};                                        // creates an Aircraft with weight w
void AirCraft::refuel() { fuel = 100; };  // Resets fuel back to 100%
void AirCraft::fly(int headwind, int minutes) {
  numberOfFlights++;
};  // headwind in km/h and minutes (time flying)
float AirCraft::get_fuel() { return fuel; };
void AirCraft::set_fuel(float fuel) { this->fuel = fuel; };
int AirCraft::get_numberOfFlights() { return numberOfFlights; };
void AirCraft::set_numberOfFlights(int numberOfFlights) {
  this->numberOfFlights = numberOfFlights;
};
int AirCraft::get_weight() { return weight; };
void AirCraft::set_weight(int weight) { this->weight = weight; };