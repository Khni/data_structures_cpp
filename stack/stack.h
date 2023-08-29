using namespace std;
#ifndef STACK_H
#define STACK_H
template <class DataType>
class Stack
{
    DataType *stk;
    int Top, count, maxSize;

public:
    Stack(int);
    void push(DataType);
    void pop(DataType &);
    void display();
    bool stackIsFull();
    bool stackIsEmpty();

    DataType stackTop();
};

#endif STACK_H