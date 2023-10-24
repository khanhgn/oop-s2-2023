#include <iostream>
using namespace std;

#include "Effect.h"
#include "Explosion.h"
#include "Game.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"

int main() {
  Game game;
  std::vector<GameEntity*> entities = game.initGame(3, 4, 8, 9);
  game.gameLoop(100, 2);
}