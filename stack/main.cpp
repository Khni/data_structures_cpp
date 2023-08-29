#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main()

{
    Stack<int> stack(100);
    stack.push(10);
    stack.display();

    return 0;
}