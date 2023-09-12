#include <iostream>
#include <string>
using namespace std;
#include "University.h"

University::University(string name, string location) {
  this->name = name;
  this->location = location;
}
void University::addCourse(int id, std::string name) {
  this->id = id;
  this->name = name;
}