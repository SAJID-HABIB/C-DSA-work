#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;
class Student
{
public:
  string name;
    int roll;
    float marks;
    Student* nextNode;

    Student(string n, int r, float  m);

    void display();
};




#endif