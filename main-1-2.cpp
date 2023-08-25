#include <iostream>
#include <string>
using namespace std;
#include "Asset.h"
#include "AssetPortfolio.h"

int main() {
  AssetPortfolio portfolio(4);
  Asset a1;
  Asset a2(800, "Iphone 12");
  Asset a3(900, "Iphone 13");
  Asset a4(1000, "Iphone 14");
  Asset a5(1100, "Iphone 15");
  Asset a6(1200, "Iphone 16");
  cout << "There are: " << portfolio.get_num_assets()
       << " assets in your portfolio" << endl;
  if (portfolio.add_asset(a1)) {
    cout << "Successfully added another asset" << endl;
  } else {
    cout << "Unsuccessfully added the asset" << endl;
  }
  if (portfolio.add_asset(a2)) {
    cout << "Successfully added another asset" << endl;
  } else {
    cout << "Unsuccessfully added the asset" << endl;
  }
  if (portfolio.add_asset(a3)) {
    cout << "Successfully added another asset" << endl;
  } else {
    cout << "Unsuccessfully added the asset" << endl;
  }
  if (portfolio.add_asset(a4)) {
    cout << "Successfully added another asset" << endl;
  } else {
    cout << "Unsuccessfully added the asset" << endl;
  }
  if (portfolio.add_asset(a5)) {
    cout << "Successfully added another asset" << endl;
  } else {
    cout << "Unsuccessfully added the asset" << endl;
  }
  if (portfolio.add_asset(a6)) {
    cout << "Successfully added another asset" << endl;
  } else {
    cout << "Unsuccessfully added the asset" << endl;
  }
  cout << "There are now: " << portfolio.get_num_assets()
       << " assets in your portfolio";
  Asset* list_asset = portfolio.get_assets();
  cout << endl << "These assets are: " << endl;
  for (int i = 0; i < portfolio.get_num_assets(); i++) {
    cout << "Asset " << i + 1 << " of type  "
         << list_asset[i].get_product_type() << " with value "
         << list_asset[i].get_value() << endl;
  }
  if (portfolio.has_asset("Iphone 3")) {
    cout << "You do have an iphone 3" << endl;
  } else {
    cout << "You do not have an iphone 3" << endl;
  }

  if (portfolio.has_asset("Iphone 12")) {
    cout << "You do have an iphone 12" << endl;
  } else {
    cout << "You do not have an iphone 12" << endl;
  }
  return 0;
}