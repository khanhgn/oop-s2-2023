#include <cmath>
#include <tuple>

#include "GameEntity.h"
using namespace std;

class Utils {
 public:
  std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;
    tuple<int, int> position = make_tuple(x, y);
    return position;
  }
  double calculateDistance(std::tuple<int, int> pos1,
                           std::tuple<int, int> pos2) {
    double x1, y1, x2, y2;
    std::tie(x1, y1) = pos1;

    std::tie(x2, y2) = pos2;
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    return distance;
  }
};