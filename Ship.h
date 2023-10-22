#pragma once
#include <tuple>

#include "GameEntity.h"
class Ship : public GameEntity {
 public:
  //   Ship(int x, int y) : position(make_tuple(x, y)), type('S') {}
  //   void move(int dx, int dy) { position(make_tuple(dx, dy)); }
  // }
  Ship(int x, int y) : GameEntity(x, y, 'S') {}

  void move(int dx, int dy) {
    int currentX, currentY;
    std::tie(currentX, currentY) = position;
    position = std::make_tuple(currentX + dx, currentY + dy);
  }
};