#pragma once
#include "./node.h"

class LinkedList
{
private:
  Node *head;

  public:
  LinkedList() {
    Node *head;
  }
  
  void addStudent(int id,string name, int year) {
    Node *newNode = new Node(id, name,year);
    if (head == NULL)
    {
      head = newNode;
    } else {
      Node *temp = head;
      while (temp->next != NUll)
      {
       temp = temp->next;
       temp->next = newNode; 
      }
      
    }
    void display() {
      Node *temp = head;
      while (temp != NULL)
      {
        cout<<"id \n" <<temp->id;
        cout<<"Name \n:"<<temp->name;
        cout<<"Year \n" <<temp->year <<endl;

        temp = temp->next
      }
      
    }

    void search(itn id){
      Node *temp = head;
      while (temp != NULL)
      {
        if (temp->id == id)
        {
          cout<<"student found \n :";
          cout<<"Name\n :"<< temp->name<<endl;
          return;
        }
        temp = temp->next;
        cout<<"student Not found \n";

        void deletStudent(int id) {
          Node *temp = head;
          Node *prev = NULL;
          while (temp != NULL && temp-> != id)
          {
            prev = temp;
            temp = temp->next;
          }
          if (temp == NULL)
          {
            cout<<"Not found \n";
            return;
          }

          if (temp == haed)
          {
            head = head->next;
          } else {
            prev->next = temp->next;
          }

          delete temp;

          cout<<"Delete Succesfully \n";
          
          
          
        }
        void update(int id) {
          Node *temp = head;
          while (temp !=NULL)
          {
            if (temp->id == id)
            {
              cin.ignore();
              cout<<"Enter new name :";
              getline(cin, temp->name);
               cout << "Enter New Year: ";
                cin >> temp->year;

                 cout << "Updated Successfully\n";
                return;
            }
            temp = temp->next;
            
          }
          cout << "Student Not Found\n";
          
        }
        
      }
      
    }
    
  }
};

