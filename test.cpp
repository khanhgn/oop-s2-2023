#include <iostream>
using namespace std;

int main() {
  int array[6] = {1, 2, 1, 4, 1, 3};
  int n = 6;
  int max = array[0];
  int min = array[0];
  for (int i = 0; i < n; i++) {
    if (array[i + 1] > array[i]) {
      max = array[i];
    }
    if (array[i + 1] < array[i]) {
      min = array[i];
    }
  }

  int* count = (int*)malloc(sizeof(int) * (max + 1));
  for (int i = 0; i < max + 1; i++) {
    count[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    if (array[i] <= max) {
      count[array[i]]++;
      // fix this part from this github post:
      // https://stackoverflow.com/questions/28511557/how-do-i-count-the-number-of-occurrences-in-an-array
    }
  }
  double avg = 0;
  for (int i = 0; i < max + 1; i++) {
    if (count[i] != 0) {
      avg = avg + ((double)i * (double)count[i] / (double)n) * (double)count[i];
    }
  }
  cout << avg;
  for (int i = 0; i < max + 1; i++) {
    cout << count[i];
  }

  //   int counts[4 + 1] = {0, 0, 0, 0, 0};
  //   for (int i = 0; i < 4; i++) {
  //     if (ar[i] <= max) {
  //       counts[ar[i]]++;
  //     }
  //   }
  //   for (int j = 0; j <= max; j++) {
  //     cout << "Number: " << j << "Number of Occurances: " << counts[j] <<
  //     endl;
  //   }
}
