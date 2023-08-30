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
    cout << "enter id: ";
    cin >> ID;
    list[index++] = new Car(ID);
  }
  return 0;
}