#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int sum_if_palindrom(int intergers[], int length) {
  if (length < 1) {
    return -1;
  }
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += intergers[i];
  }
  return sum;
}

bool is_palindrome(int intergers[], int length) {
  if (length < 1) {
    return -1;
  }
  for (int i = 0; i < length / 2; i++) {
    if (intergers[i] != intergers[length - i - 1]) {
      return false;
    }
  }
  return true;
}

int sum_array_elements(int intergers[], int length) {
  if (length < 1) {
    return -1;
  }
  int sum;
  if (is_palindrome(intergers, length) == true) {
    sum = sum_if_palindrom(intergers, length);
  } else if (is_palindrome(intergers, length) == false) {
    return -2;
  }
  return sum;
}