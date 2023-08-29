#include "stack.h"
#include <iostream>
using namespace std;

template <class DataType>
Stack<DataType>::Stack(int size)
{
    maxSize = size;
    stk = new DataType[maxSize];
    top = -1;
    count = 0;
}

template <class DataType>
void Stack<DataType>::push(DataType data)

{
    if (!stackIsFull())
    {
        top++;
        count++;
        stk[top] = data;
    }
}

template <class DataType>
void Stack<DataType>::pop(DataType &x)

{
    x = stk[top];
    top--;
    count--;
}

template <class DataType>
DataType Stack<DataType>::stackTop()
{
    return stk[top];
}

template <class DataType>
void Stack<DataType>::display()
{
    // check if stack is not empty

    if (!stackIsEmpty())
    {
        cout << "stack is not empty";
        for (int x = 0; x <= count; x++)
        {
            cout << stk[x];
        }
    }
}

template <class DataType>
bool Stack<DataType>::stackIsEmpty()
{
    return (top == -1);
}

template <class DataType>
bool Stack<DataType>::stackIsFull()
{
    return (count == maxSize);
}