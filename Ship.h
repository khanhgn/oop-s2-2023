#pragma once

#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
using namespace std;

class Ship : public GameEntity {
 public:
  Ship(int x, int y) : GameEntity(x, y, 'S') {}
  void move(int dx, int dy) {
    int x, y;
    tie(x, y) = position;
    int newX = dx + x;
    int newY = dy + y;
    position = make_tuple(newX, newY);
    type = 'X';
  }
};