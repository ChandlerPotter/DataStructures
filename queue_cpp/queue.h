#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"

class Queue
{
public:
    Queue();
    ~Queue();
    Node *getHead();
    void enqueu(int n);
    int dequeue();
    bool isEmpty();
    void printQueue();

private:
    Node *head;
    Node *tail;
};

#endif