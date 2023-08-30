#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"
using namespace std;
#include <iostream>
#include <string>
int main() {
  ParkingLot lot(2);
  bool runCon = true;
  while (runCon) {
    cout << "Enter vehicle type (1 for car, 2 for bike, 3 for bus):";
    int vehicleType;
    cin >> vehicleType;
    cout << "Enter vehicle ID: ";
    int ID;
    cin >> ID;
    Vehicle* newVehicle;
    switch (vehicleType) {
      case 1:
        newVehicle = new Car(ID);
        break;
      case 2:
        newVehicle = new Motorbike(ID);
        break;
      case 3:
        newVehicle = new Bus(ID);
        break;
    }

    if (lot.parkVehicle(newVehicle)) {
      cout << "parked successfully" << endl;
    } else {
      delete newVehicle;
      cout << "parked not successfully" << endl;
      runCon = false;
    }
  }

  cout << "Enter ID to unpark: ";
  int ID;
  cin >> ID;
  lot.unparkVehicle(ID);

  return 0;
}
