#pragma once
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"

class Explosion : public GameEntity, public Effect {
 public:
  Explosion(int x, int y) : GameEntity(x, y, 'E') {}

  void apply(GameEntity& entity) {
    entity.position = std::make_tuple(-1, -1);
    entity.type = 'X';
  }
};
