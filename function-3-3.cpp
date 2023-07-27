#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {
  int max = array[0];
  //   int min = array[0];
  for (int i = 0; i < n; i++) {
    if (array[i + 1] > array[i]) {
      max = array[i];
    }
    // if (array[i + 1] < array[i]) {
    //   min = array[i];
    // }
  }
  int* count = (int*)malloc(sizeof(int) * (max + 1));
  for (int i = 0; i < max + 1; i++) {
    count[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    if (array[i] <= max) {
      count[array[i]]++;
      // fix this part from this post:
      // https://stackoverflow.com/questions/28511557/how-do-i-count-the-number-of-occurrences-in-an-array
    }
  }
  double avg = 0;
  for (int i = 0; i < max + 1; i++) {
    // cast double
    avg = avg + ((double)i * (double)count[i] / (double)n) * (double)count[i];
  }
  return avg;
}