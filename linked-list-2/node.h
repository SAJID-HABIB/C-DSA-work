#pragma once
#include <iostream>
#include <string>

using namespace std;
class Node
{
public:
    int studentId;
    string studentName;
    int year;
    Node *next;

    Node(int id, string name, int y) : studentId(id), studentName(name), year(y), next(NULL) {};
};