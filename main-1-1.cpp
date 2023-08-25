#include <iostream>
#include <string>
using namespace std;
#include "Asset.h"

int main() {
  Asset a1;
  Asset a2(800, "Iphone 12");
  cout << "Default Value = " << a1.get_value()
       << " Default Type = " << a1.get_product_type() << endl;
  cout << "New Value = " << a2.get_value()
       << " New Type = " << a2.get_product_type() << endl;
  return 0;
}