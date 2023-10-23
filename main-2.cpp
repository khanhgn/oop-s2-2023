#include <iostream>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"
using namespace std;

int main() {
  Ship s1(1, 1);
  Mine m1(1, 1);
  Explosion e1(1, 1);
  s1.move(1, 1);
  m1.explode();
  e1.apply(s1);
  return 0;
}