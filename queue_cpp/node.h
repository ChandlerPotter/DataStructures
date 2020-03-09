#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node();
    Node(int d);
    ~Node();
    int getData();
    void setData(int d);
    Node *getNext();
    void setNext(Node *n);
    Node *getPrev();
    void setPrev(Node *p);
    bool isNext();
    bool isPrev();

private:
    int data;
    Node *next;
    Node *prev;
};

#endif