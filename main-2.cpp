#include <tuple>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

int main() {
  Effect e1;
  GameEntity g1(1, 1, 'd');
  Utils u1;
  Mine m1(1, 1);
  Ship s1(1, 1);
  Explosion e1(1, 1);

  tuple<int, int> x = Utils::generateRandomPos(10, 10);
  tuple<int, int> y = Utils::generateRandomPos(10, 10);
  int dif = Utils::calculateDistance(x, y);
};