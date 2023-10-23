#pragma once
#include <tuple>

#include "GameEntity.h"
using namespace std;

class Effect {
 public:
  virtual void apply(GameEntity& entity){};
};