
#include "Student.h"

Student::Student(string n, int r, float m) {
  name = n;
  roll = r;
  marks = m;
}

void Student::display() {
     cout << name << " " << roll << " " << marks << endl; 
  };