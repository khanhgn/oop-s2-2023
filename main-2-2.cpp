#include <iostream>
using namespace std;
#include "Airplane.h"

int main() {
  Airplane a1(5000, 100);
  a1.set_fuel(95);
  a1.set_numberOfFlights(0);
  cout << "Airplane "
       << "weights: " << a1.get_weight() << " and has: " << a1.get_fuel()
       << " fuel"
       << ", it has " << a1.get_numberOfFlights() << " number of flights"
       << endl;
  cout << "lets take the plane for a flight" << endl;
  a1.fly(65, 120);
  cout << "now"
       << " has: " << a1.get_fuel() << "and weights: " << a1.get_weight()
       << " it flies: " << a1.get_numberOfFlights() << endl;
  a1.set_fuel(20);
  a1.fly(45, 10);
  cout << "now"
       << " has: " << a1.get_fuel() << "and weights: " << a1.get_weight()
       << " it flies: " << a1.get_numberOfFlights() << endl;
  return 0;
}