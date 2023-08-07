#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
using namespace std;

int main()

{
    LinkedList<int> list;
    cout << list.isEmpty() << endl;

    return 0;
}