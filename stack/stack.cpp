#include "stack.h"
#include <iostream>
using namespace std;

template <class DataType>
Stack<DataType>::Stack(int size = 128)
{
    stk = new DataType[size];
    top = -1;
    count = 0;
}

template <class DataType>
void Stack<DataType>::push(DataType data)
{
    top++;
    count++;
    stk[top] = data;
}

template <class DataType>
void Stack<DataType>::pop()
{
    top--;
    count--;
}

template <class DataType>
DataType Stack<DataType>::top()
{
    return stk[top];
}