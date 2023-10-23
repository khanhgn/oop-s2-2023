#pragma once
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"

class Explosion : public Effect, public GameEntity {
 public:
  Explosion(int x, int y) : GameEntity(x, y, 'E') {}
  void apply(GameEntity& entity) override {
    position = make_tuple(-1, -1);
    type = 'X';
  }
};