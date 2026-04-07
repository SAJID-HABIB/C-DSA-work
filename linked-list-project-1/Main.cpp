#include "Student.h"
#include "Number.h"
#include <iostream>

using namespace std;
int main()
{
  //===== student list =====
  int sn;
  cout << "How many students? ";
  cin >> sn;

  Student *shead = NULL;
  Student *stail = NULL;

  for (int i = 0; i < sn; i++)
  {
    string name;
    int roll;
    float marks;

    cout << "\nEnter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;

    Student* newStudent = new Student(name, roll, marks);

    if (shead == NULL)
    {
      shead = newStudent;
      stail = shead;
    } else {
      stail->nextNode = newStudent;
      stail = newStudent;
    }
    
  }
cout << "\n-------stunent list--------\n";
// shead = shead;

while (stail != NULL)
{
  stail->display();
  stail = stail->nextNode;
}

//===========number list ==========

int nn;
cout <<  "\nHow many numbers? ";
cin >> nn;

Number* nhead = NULL;
Number* ntail = NULL;

for (int i = 0; i < nn; i++)
{
  int val;
  cout <<"Enetr number :";
  cin >> val;

  Number *newNode = new Number(val);

  if (nhead == NULL)
  {
    nhead  = ntail = newNode;
    temp = nhead;
  } else {
    temp->nextNode = newNode;
    temp = newNode;
  }
  
}

cout << "\n ------- number list ------\n";
temp = nhead;
while (temp != NULL)
{
  temp->display();
  temp = temp->nextNode;
}

// cout << " NULL" << endl;

return 0;



}