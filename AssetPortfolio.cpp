#include <iostream>
#include <string>
using namespace std;
#include "Asset.h"
#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio() {
  maxSize = 0;
  currentSize = 0;
  list = new Asset[maxSize];
};  // default constructor capacity of zero
    // assets
AssetPortfolio::AssetPortfolio(int size) {
  maxSize = size;
  currentSize = 0;
  list = new Asset[maxSize];
};  // constructor for a portfolio of given size

// returns the number of assets which are in the portfolio
int AssetPortfolio::get_num_assets() { return currentSize; };

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool AssetPortfolio::has_asset(std::string product) {
  for (int i = 0; i < maxSize; i++) {
    if (list[i].get_product_type() == product) {
      return true;
    }
  }
  return false;
};

Asset* AssetPortfolio::get_assets() {
  return list;
};  // returns the array of assets of the portfolio

// returns true and adds new asset to the portfolio if the portfolio is not
// full otherwise returns false
bool AssetPortfolio::add_asset(Asset new_asset) {
  if (currentSize < maxSize) {
    list[currentSize] = new_asset;
    currentSize++;
    return true;
  } else {
    return false;
  }
};

AssetPortfolio::~AssetPortfolio() { delete[] list; };  // destructor