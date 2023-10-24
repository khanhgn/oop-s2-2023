#pragma once
#include "Explosion.h"
#include "GameEntity.h"

class Mine : public GameEntity {
 public:
  Mine(int x, int y) : GameEntity(x, y, 'M') {}
  Explosion explode() { type = 'X'; }
};