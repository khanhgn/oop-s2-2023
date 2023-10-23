#include <tuple>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
using namespace std;

class Mine : public GameEntity {
 public:
  Mine(int x, int y) : GameEntity(x, y, 'M') {}
  Explosion explode() {
    type = 'X';
    return Explosion(std::get<0>(position), std::get<1>(position));
  }
};