#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"
using namespace std;
#include <iostream>

int main() {
  ParkingLot lot(10);
  int numCars, numBuses, numBikes;
  cout << "enter number of cars: ";
  cin >> numCars;
  cout << "enter number of buses: ";
  cin >> numBuses;
  cout << "enter number of bikes: ";
  cin >> numBikes;

  int index = 0;
  for (int i = 0; i < numCars; i++) {
    int ID;
    cout << "enter car id: ";
    cin >> ID;
    if (vehicles[i].parkVehicle(new Car(ID))) {
      cout << "parked car successfully" << endl;
    } else {
      cout << "lot full" << endl;
    }
  }
  for (int i = 0; i < numBuses; i++) {
    int ID;
    cout << "enter bus id: ";
    cin >> ID;
    if (vehicles[i].parkVehicle(new Bus(ID))) {
      cout << "parked bus successfully" << endl;
    } else {
      cout << "lot full" << endl;
    }
  }
  for (int i = 0; i < numBikes; i++) {
    int ID;
    cout << "enter motorbike id: ";
    cin >> ID;
    if (vehicles[i].parkVehicle(new Motorbike(ID))) {
      cout << "parked motorbike successfully" << endl;
    } else {
      cout << "lot full" << endl;
    }
  }

  for (int i = 0; i < numCars + numBikes + numBuses; i++) {
    cout << lot[i]->getID() << " parked for: " << lot[i]->getParkingDuration()
         << endl;
  }
  return 0;
}