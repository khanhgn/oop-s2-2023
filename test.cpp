#include <iostream>
using namespace std;

int main() {
  0 % 2;
  return 0;
  // for (int i = 0; i < n; i++) {
  //   if (array[i + 1] > array[i]) {
  //     max = array[i];
  //   }
  //   if (array[i + 1] < array[i]) {
  //     min = array[i];
  //   }
  // }

  // int* count = (int*)malloc(sizeof(int) * (max + 1));
  // for (int i = 0; i < max + 1; i++) {
  //   count[i] = 0;
  // }
  // for (int i = 0; i < n; i++) {
  //   if (array[i] <= max) {
  //     count[array[i]]++;
  //     // fix this part from this github post:
  //     //
  //     https://stackoverflow.com/questions/28511557/how-do-i-count-the-number-of-occurrences-in-an-array
  //   }
  // }
  // double avg = 0;
  // for (int i = 0; i < max + 1; i++) {
  //   avg = avg + (double)array[i] * (double)count[array[i]] / (double)n *
  //                   (double)count[array[i]];
  // }
  // cout << avg << endl;
  // for (int i = 0; i < max + 1; i++) {
  //   cout << count[i];
  // }

  // //   int counts[4 + 1] = {0, 0, 0, 0, 0};
  // //   for (int i = 0; i < 4; i++) {
  // //     if (ar[i] <= max) {
  // //       counts[ar[i]]++;
  // //     }
  // //   }
  // //   for (int j = 0; j <= max; j++) {
  // //     cout << "Number: " << j << "Number of Occurances: " << counts[j] <<
  // //     endl;
  // //   }
}
