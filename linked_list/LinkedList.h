#include <iostream>

using namespace std;
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
template <class DataType>
class LinkedList
{

    struct Node
    {
        DataType num;
        Node *next;
    };
    Node *head, *cursor, *prev;

public:
    LinkedList();
    void display();
    void advance();
    void insertFirst(DataType);
    bool isEmpty();
};

#endif // LINKEDLIST_H
       // #include "LinkedList.cpp"
