
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
};

struct PersonList {
  Person* people;
  int numPeople;
};

#include "function-1-2.cpp"
#include "function-1-3.cpp"
#include "function-1-4.cpp"

#endif