#include <cmath>
#include <iostream>
#include <tuple>
using namespace std;

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"
int main() {
  srand(static_cast<unsigned>(time(nullptr)));
  // Generate random positions
  tuple<int, int> pos1 = Utils::generateRandomPos(20, 10);
  tuple<int, int> pos2 = Utils::generateRandomPos(20, 10);

  // Calculate distance between positions
  double distance = Utils::calculateDistance(pos1, pos2);

  cout << "Random Position 1: (" << std::get<0>(pos1) << ", "
       << std::get<1>(pos1) << ")" << std::endl;
  cout << "Random Position 2: (" << std::get<0>(pos2) << ", "
       << std::get<1>(pos2) << ")" << std::endl;
  cout << "Distance between positions: " << distance << std::endl;

  return 0;
}
