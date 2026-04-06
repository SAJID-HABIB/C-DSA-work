#ifndef NUUMBER_H
#define NUUMBER_H

#include <iostream>

using namespace std;
class Number
{
public:
  int data;
  Number* nextNode;

  Number(int d);

  void display();
};

#endif

