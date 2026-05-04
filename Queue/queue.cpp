#include <iostream>

using namespace std;

class Node
{
public:
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};

class Queue
{
  Node* head;
  Node* tail;
public:
  Queue() {
    head = tail = NULL;
  }

  void push(int data) {
    Node* newNode = new Node(data);
    if (empty())
    {
      head = tail = newNode; 
    } else {
      tail->next = newNode;
      tail = newNode;
    }
    
  }

  void pop() {

  }

  int front() {

  }

  bool empty() {
    return head == NULL;
  }
};



