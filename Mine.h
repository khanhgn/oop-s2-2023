#pragma once
#include "Explosion.h"
#include "GameEntity.h"

class Mine : public GameEntity {
 public:
  Mine(int x, int y) : GameEntity(x, y, 'M') {}
  Explosion explode() {
    int x = get<0>(position);
    int y = get<1>(position);
    type = 'X';
    Explosion e1(x, y);
    return e1;
  }
};