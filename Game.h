#pragma once
using namespace std;
#include <tuple>
#include <vector>

#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"

class Game {
 private:
  std::vector<Cell*> grid;

 public:
  Game() {}
  std::vector<Cell*>& getGrid() { return grid; }
  void setGrid(vector<Cell*> newGrid) { grid = newGrid; }
  void initGame(int numCharacters, int numTraps, int gridWidth,
                int gridHeight) {
    vector<Cell*> newGrid;
    for (int i = 0; i < numCharacters; i++) {
      tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      int x = get<0>(pos);
      int y = get<1>(pos);
      newGrid.push_back(new Character(x, y));
    }
    for (int i = 0; i < numTraps; i++) {
      tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
      int x = get<0>(pos);
      int y = get<1>(pos);
      newGrid.push_back(new Trap(x, y));
    }
    setGrid(newGrid);
  }
  void gameLoop(int maxIterations, double trapActivationDistance) {
    int iter = 0;
    while (iter < maxIterations) {
      for (Cell* cell : grid) {
        if (dynamic_cast<Character*>(cell)) {
          cell = dynamic_cast<Character*>(cell);
          cell->move()
        }
      }
    }
  }
};