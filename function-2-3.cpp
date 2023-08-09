#include <cmath>
#include <iostream>
using namespace std;

int palindrome_sum(int integers[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}

bool is_array_palindrome(int integers[], int length) {
  for (int i = 0; i < length / 2; i++) {
    if (integers[i] != integers[length - i - 1]) {
      return 1;
    }
  }
  return 0;
}

int sum_integers(int integers[], int length) {
  if (is_array_palindrome(integers, length) == 1) {
    return -2;
  }
  int sum = palindrome_sum(integers, length);
  return sum;
}