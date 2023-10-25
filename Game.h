#pragma once
#include <tuple>
#include <vector>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"
using namespace std;

class Game {
 private:
  std::vector<GameEntity*> entities;

 public:
  vector<GameEntity*> get_entity() { return entities; }
  void set_entity(vector<GameEntity*> _entities) { entities = _entities; }
  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                                    int gridHeight) {
    vector<GameEntity*> entities;
    for (int i = 0; i < numShips; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      entities.push_back(new Ship(get<0>(position)), get<1>(position));
    }
    for (int i = 0; i < numMines; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      entities.push_back(new Mine(get<0>(position)), get<1>(position));
    }
    }
};