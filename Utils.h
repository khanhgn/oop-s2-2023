#pragma once
#include <tuple>

class Utils {
 public:
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int x, y;
    x = rand() % gridWidth;
    y = rand() % gridHeight;
    int position = make_tuple(x, y);
    return position;
  }
  double calculateDistance(std::tuple<int, int> pos1,
                           std::tuple<int, int> pos2) {
    int x1, y1, x2, y2;
    x1 = get<1> int position = make_tuple(x, y);
    return position;
  }
}