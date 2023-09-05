#include <iostream>
using namespace std;
#include "header.h"

Appliance::Appliance() {
  isOn = false;
  powerRating = 0;
};
Appliance::Appliance(int powerRating) {
  isOn = false;
  this->powerRating = powerRating;
};
void Appliance::turnOn() { isOn = false; };
void Appliance::turnOff() { isOn = false; };
int Appliance::get_powerRating() { return powerRating; };
bool Appliance::get_isOn() { return isOn; };
void Appliance::set_powerRating(int powerRating) {
  this->powerRating = powerRating;
};
void Appliance::set_isOn(bool isOn) { this->isOn = isOn; };
double Appliance::getPowerConsumption() { return 0; };