#include <iostream>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

int main() {
  // Create Ship and Mine objects
  srand(static_cast<unsigned>(time(nullptr)));

  Ship myShip(5, 5);
  Mine myMine(10, 10);

  // Call move function on the Ship object
  myShip.move(2, 3);

  // Call explode function on the Mine object
  Explosion explosion = myMine.explode();

  // Call apply function on the Explosion object
  explosion.apply(myShip);

  // Display the updated state of Ship and Mine
  std::cout << "Ship Position: (" << std::get<0>(myShip.getPos()) << ", "
            << std::get<1>(myShip.getPos()) << "), Type: " << myShip.getType()
            << std::endl;
  std::cout << "Mine Position: (" << std::get<0>(myMine.getPos()) << ", "
            << std::get<1>(myMine.getPos()) << "), Type: " << myMine.getType()
            << std::endl;

  return 0;
}
