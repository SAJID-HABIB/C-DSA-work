#include "Number.h"

Number::Number(int d) {
  data = d;
  nextNode = NULL;
}

void Number::display() {
  cout<<data<<" -> ";
}