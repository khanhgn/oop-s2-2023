#include <cmath>
#include <iostream>
using namespace std;

int palindrome_sum(int integers[], int length) {
  if (length < 1) {
    return -1;
  }
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}

bool is_array_palindrome(int integers[], int length) {
  if (length < 1) {
    return -1;
  }
  for (int i = 0; i < length / 2; i++) {
    if (integers[i] != integers[length - i - 1]) {
      return false;
    }
  }
  return true;
}

int sum_integers(int integers[], int length) {
  if (length < 1) {
    return -1;
  }
  if (is_array_palindrome(integers, length) == false) {
    return -2;
  }
  int sum = palindrome_sum(integers, length);
  return sum;
}