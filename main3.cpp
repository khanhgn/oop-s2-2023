#include <iostream>

#include "Effect.h"
#include "Explosion.h"
#include "Game.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"
int main() {
  int numShips = 5;
  int numMines = 5;
  int gridWidth = 10;
  int gridHeight = 10;
  int maxIterations = 20;
  double mineDistanceThreshold = 2.0;

  Game game;
  std::vector<GameEntity*> entities =
      game.initGame(numShips, numMines, gridWidth, gridHeight);
  game.gameLoop(maxIterations, mineDistanceThreshold);

  // Clean up memory for dynamically allocated entities
  for (GameEntity* entity : entities) {
    delete entity;
  }

  return 0;
}
