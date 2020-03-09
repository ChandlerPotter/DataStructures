#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"

class Queue
{
public:
    Queue();

private:
    Node *head;
    Node *tail;
};

#endif