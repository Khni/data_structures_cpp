

class LinkedList
{

    struct Node
    {
        int num;
        Node *next;
    };
    Node *head, *cursor, *prev;

public:
    LinkedList();
    void display();
    void insertFirst();
    bool isEmpty();
};