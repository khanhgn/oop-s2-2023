#include <iostream>
#include <string>
using namespace std;

class University {
 private:
  std::string name;
  std::string location;

 public:
  University(string name, string location);
  void addCourse(int id, std::string name);
};
