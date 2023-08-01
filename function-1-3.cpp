#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
  int count[10] = {0};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      count[array[i][j]]++;
    }
  }
  cout << count[0] << ":number of zeros;";
  cout << count[1] << ":number of ones;";
  cout << count[2] << ":number of twos;";
  cout << count[3] << ":number of threes;";
  cout << count[4] << ":number of fours;";
  cout << count[5] << ":number of fives;";
  cout << count[6] << ":number of sixes;";
  cout << count[7] << ":number of sevens;";
  cout << count[8] << ":number of eights;";
  cout << count[9] << ":number of nines" << endl;
}