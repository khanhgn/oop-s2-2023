#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int array_min(int intergers[], int length) {
  if (length < 1) {
    return -1;
  }
  int min = intergers[0];
  for (int i = 1; i < length; i++) {
    if (intergers[i] < intergers[i - 1]) {
      min = intergers[i];
    }
  }
  return min;
}

int array_max(int intergers[], int length) {
  if (length < 1) {
    return -1;
  }
  int max = intergers[0];
  for (int i = 1; i < length; i++) {
    if (intergers[i] > intergers[i - 1]) {
      max = intergers[i];
    }
  }
  return max;
}

int sum_min_max(int intergers[], int length) {
  if (length < 1) {
    return -1;
  }
  int sum = array_min(intergers, length) + array_max(intergers, length);
  return sum;
}