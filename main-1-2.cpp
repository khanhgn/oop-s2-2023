#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"
using namespace std;
#include <iostream>
#include <string>
int main() {
  ParkingLot lot(10);
  Vehicle* newVehicle;
  for (int i = 0; i < 10; i++) {
    std::cout << "Enter vehicle type (1 for car, 2 for bike, 3 for bus):";
    int vehicleType;
    std::cin >> vehicleType;

    switch (vehicleType) {
      case 1:
        newVehicle[i] = Car(i + 1);
        lot.parkVehicle(&newVehicle[i]);
        break;
      case 2:
        newVehicle[i] = Motorbike(i + 1);
        lot.parkVehicle(&newVehicle[i]);
        break;
      case 3:
        newVehicle[i] = Bus(i + 1);
        lot.parkVehicle(&newVehicle[i]);
        break;
    }
  }

  std::cout << "There are: " << lot.getCount()
            << " vehicles in the parking lot";

  std::cout << "Enter ID to unpark: ";
  int ID;
  std::cin >> ID;
  lot.unparkVehicle(ID);

  return 0;
}
