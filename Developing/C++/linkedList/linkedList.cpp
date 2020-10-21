#include <iostream>

struct Node
{
    int data;
    struct Node *next;
};

class List
{
    List()
    {
        Node tail;
        Node head;
    }
};