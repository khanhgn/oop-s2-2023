#pragma once
using namespace std;
#include <iostream>
#include <tuple>
class GameEntity {
 public:
  tuple<int, int> position;
  char type;

 public:
  GameEntity(int x, int y, char type)
      : position(make_tuple(x, y)), type(type) {}
  tuple<int, int> getPos() { return position; };
  char getType() { return type; };
  virtual ~GameEntity() {}  // Add a virtual destructor
};