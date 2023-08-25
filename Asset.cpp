#include <iostream>
#include <string>
using namespace std;
#include "Asset.h"

Asset::Asset() {
  value = 0;
  product_type = "";
};  // a default constructor

// a constructor that takes the product type  and value
Asset::Asset(int value, std::string product_type) {
  this->value = value;
  this->product_type = product_type;
};

std::string Asset::get_product_type() {
  return product_type;
};                                         // returns the financial asset type
int Asset::get_value() { return value; };  // returns the the value of asset
Asset::~Asset(){};                         // A default
// destructor
