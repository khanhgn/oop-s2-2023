#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(string decimal_number);

int main() {
  string decimal = "75";
  print_binary_str(decimal);
  return 0;
}