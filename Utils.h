#pragma once
#include <cmath>
#include <tuple>
using namespace std;

class Utils {
 public:
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int x, y;
    x = rand() % gridWidth;
    y = rand() % gridHeight;
    tuple<int, int> position = make_tuple(x, y);
    return position;
  }
  static double calculateDistance(std::tuple<int, int> pos1,
                                  std::tuple<int, int> pos2) {
    int x1, y1, x2, y2;
    x1 = get<0>(pos1);
    y1 = get<1>(pos1);
    x2 = get<0>(pos2);
    y2 = get<1>(pos2);
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
  }
};