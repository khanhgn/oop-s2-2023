#include <iostream>
using namespace std;

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main() {
  GameEntity pos1(1, 2, 'C');
  GameEntity pos2(4, 6, 'C');
  Effect b;
  Utils c;

  cout << c.calculateDistance(pos1.getPos(), pos2.getPos()) << endl;
}