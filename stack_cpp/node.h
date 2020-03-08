#ifndef NODE_H
#define NODE_H

//Node class
class Node
{
public:
    Node();
    Node(int d);
    ~Node();
    int getData();
    void setData(int d);
    bool isNext();
    void setNext(Node *n);
    Node *getNext();

private:
    int data;
    Node *next;
};
#endif