#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {
  double weighted_avg = 0;
  for (int i = 0; i < n; i++) {
    double occurances = 0;
    for (int j = 0; j < n; j++) {
      if (array[j] == array[i]) {
        occurances++;
      }
    }
    weighted_avg += (double)array[i] * occurances / n;
  }
  return weighted_avg;
}