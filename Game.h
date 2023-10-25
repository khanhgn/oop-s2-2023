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
  std::vector<GameEntity*> get_entities() { return entities; }
  void set_entities(const std::vector<GameEntity*>& newEntities) {
    entities = newEntities;
  }
  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                                    int gridHeight) {
    std::vector<GameEntity*> newEntities;
    for (int i = 0; i < numShips; i++) {
      tuple<int, int> shipPos = Utils::generateRandomPos(gridHeight, gridWidth);
      newEntities.push_back(new Ship(get<0>(shipPos), get<1>(shipPos)));
    }
    for (int i = 0; i < numMines; i++) {
      tuple<int, int> pos = Utils::generateRandomPos(10, 10);
      newEntities.push_back(new Mine(get<0>(pos), get<1>(pos)));
    }
    set_entities(newEntities);
    return get_entities();
  }
  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int QV = 0;
    while (QV < maxIterations) {
      for (GameEntity* entity : entities) {
        if (dynamic_cast<Ship*>(entity)) {
          Ship* ship = dynamic_cast<Ship*>(entity);
          ship->move(1, 0);
        }
        if (dynamic_cast<Mine*>(entity)) {
          Mine* mine = dynamic_cast<Mine*>(entity);
          for (GameEntity* shipEntity : entities) {
            if (dynamic_cast<Ship*>(shipEntity)) {
              Ship* ship = dynamic_cast<Ship*>(shipEntity);
              double dist =
                  Utils::calculateDistance(mine->getPos(), ship->getPos());
              if (dist <= mineDistanceThreshold) {
                Explosion e1 = mine->explode();
                e1.apply(*ship);
              }
            }
          }
        }
      }
      QV++;
    }
  }
};