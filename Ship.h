#pragma once
#include "GameEntity.h"

class Ship : public GameEntity {
 public:
  Ship(int x, int y) : GameEntity(x, y, 'S') {}
  void move(int dx, int dy) {
    int x = get<0>(position);
    int y = get<1>(position);
    int newX = x + dx;
    int newY = x + dy;
    position = make_tuple(newX, newY);
  }
};