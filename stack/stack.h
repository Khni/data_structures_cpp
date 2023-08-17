
template <class DataType>
class Stack
{
    DataType *stk;
    int Top;
    int count;

public:
    Stack(int);
    void push(DataType);
    void pop();

    DataType top();
};