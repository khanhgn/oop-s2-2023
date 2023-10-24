#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main() {
  Effect e1;
  GameEntity g1(1, 1, 'd');
  Utils u1;

  tuple<int, int> x = Utils::generateRandomPos(10, 10);
  tuple<int, int> y = Utils::generateRandomPos(10, 10);
  int dif = Utils::calculateDistance(x, y);
};