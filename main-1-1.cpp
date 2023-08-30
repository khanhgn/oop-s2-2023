#include "header.h"
using namespace std;
#include <iostream>

int main() {
  int numCars, numBuses, numBikes;
  cout << "enter number of cars: ";
  cin >> numCars;
  cout << "enter number of buses: ";
  cin >> numBuses;
  cout << "enter number of bikes: ";
  cin >> numBikes;

  Vehicle* list[numCars + numBuses + numBikes];
  int index = 0;
  for (int i = 0; i < numCars; i++) {
    int ID;
    cout << "enter car id: ";
    cin >> ID;
    list[index++] = new Car(ID);
  }
  for (int i = 0; i < numBuses; i++) {
    int ID;
    cout << "enter bus id: ";
    cin >> ID;
    list[index++] = new Bus(ID);
  }
  for (int i = 0; i < numBikes; i++) {
    int ID;
    cout << "enter motorbike id: ";
    cin >> ID;
    list[index++] = new Motorbike(ID);
  }

  for (int i = 0; i < numCars + numBikes + numBuses; i++) {
    cout << list[i]->getID() << " parked for: " << list[i]->getParkingDuration()
         << endl;
  }
  return 0;
}