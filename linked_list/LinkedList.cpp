#include "LinkedList.h"
using namespace std;
#include <iostream>
template <class DataType>
LinkedList<DataType>::LinkedList()
{
    head = NULL;
    cursor = NULL;
    prev = NULL;
}

template <class DataType>
bool LinkedList<DataType>::isEmpty()
{

    return (head == NULL);
}
