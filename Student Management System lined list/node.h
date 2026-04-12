#pragma once
#include <iostream>
using namespace std;

class Node
{
public:
  int id;
  string name;
  int year;
  Node *next;

  Node(int i, string n, int y) {
    id = i;
    name = n;
    year = y;
    next = NULL;
  }
};

