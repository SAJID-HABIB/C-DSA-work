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
  Student *stemp = NULL;

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
      stemp = shead;
    } else {
      stemp->nextNode = newStudent;
      stemp = newStudent;
    }
    
  }
cout << "\n-------stunent list--------\n";
shead = shead;

while (stemp != NULL)
{
  stemp->display();
  stemp = stemp->nextNode;
}

//===========number list ==========

int nn;
cout <<  "\nHow many numbers? ";
cin >> nn;

Number* nhead = NULL;
Number*ntemp = NULL;

for (int i = 0; i < nn; i++)
{
  int val;
  cout <<"Enetr number :";
  cin >> val;

  Number *newNode = new Number(val);

  if (nhead == NULL)
  {
    nhead = newNode;
    ntemp = nhead;
  } else {
    ntemp->nextNode = newNode;
    ntemp = newNode;
  }
  
}

cout << "\n ------- number list ------\n";
ntemp = nhead;
while (ntemp != NULL)
{
  ntemp->display();
  ntemp = ntemp->nextNode;
}

// cout << " NULL" << endl;

return 0;



}