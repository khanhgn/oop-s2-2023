#pragma once
#include "Effect.h"
#include "GameEntity.h"

class Explosion : public GameEntity, public Effect {
 public:
  Explosion(int x, int y) : GameEntity(x, y, 'E') {}
  void apply(GameEntity &g1) {
    g1.setPos(make_tuple(-1, -1));
    g1.setType('X');
  }
};