#pragma once
#include <tuple>
using namespace std;

class GameEntity {
 protected:
  std::tuple<int, int> position;
  char type;

 public:
  GameEntity(int x, int y, char type)
      : position(make_tuple(x, y)), type(type) {}
  std::tuple<int, int> getPos() { return position; }
  char getType() { return type; }
  void setPos(std::tuple<int, int> pos) { position = pos; }
  void setType(char type) { this->type = type; }
};