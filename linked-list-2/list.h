#pragma once
#include <iostream>
#include "node.h"
using namespace std;

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList() { head = tail = NULL; }
    void insertData(int id, string name, int year)
    {
        Node *newNode = new Node(id, name, year);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void display()
    {
        int i = 1;
        Node *temp = head;
        while (temp != NULL)
        {
            cout << "\n= = = Student " << i << " data = = = \n";
            cout << "Id: " << temp->studentId << endl;
            cout << "Name: " << temp->studentName << endl;
            cout << "Year: " << temp->year << endl;
            temp = temp->next;
            i++;
        }
    }
};