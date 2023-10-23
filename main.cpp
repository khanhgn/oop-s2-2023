#include <iostream>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"
using namespace std;

int main() {
  srand(static_cast<unsigned>(time(nullptr)));
  Utils u;

  tuple<int, int> pos1 = u.generateRandomPos(20, 10);

  tuple<int, int> pos2 = u.generateRandomPos(20, 10);

  double distance = u.calculateDistance(pos1, pos2);

  cout << "Random Position 1: (" << std::get<0>(pos1) << ", "

       << std::get<1>(pos1) << ")" << std::endl;

  cout << "Random Position 2: (" << std::get<0>(pos2) << ", "

       << std::get<1>(pos2) << ")" << std::endl;

  cout << "Distance between positions: " << distance << std::endl;

  return 0;
}