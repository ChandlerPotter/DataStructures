#ifndef STACK_H
#define STACK_H
#include "node.h"

//Stack class
class Stack
{
public:
    Stack();
    ~Stack();
    void push(int n);
    int getLength();
    Node *getHead();
    void printStack();
    int pop();

private:
    Node *head;
    int length;
};

#endif