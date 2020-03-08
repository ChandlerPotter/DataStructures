#include "stack.h"
#include <cstddef>
#include <iostream>
#include <string.h>

//Basic constructor for stack
Stack::Stack()
{
    head = NULL;
    length = 0;
}

//Destructor for stack
Stack::~Stack()
{
    std::cout << "Deleting Stack" << std::endl;
    delete head;
}

//Pushes a new node onto the stack. It is a FIFO data structure so it pushed the
//new node onto the front of the stack, and increments the length by 1.
void Stack::push(int n)
{
    Node *other = new Node(n);

    if (this->head == NULL)
    {
        this->head = other;
    }
    else
    {
        other->setNext(this->head);
        this->head = other;
    }
    this->length = this->length + 1;
}

//returns a node pointer to the head of the stack
Node *Stack::getHead()
{
    return this->head;
}

//retuns an int value of the length of the stack
int Stack::getLength()
{
    return this->length;
}

//prints the stack by popping each node off the stack and printing its value
void Stack::printStack()
{
    while ((this->head) != NULL)
    {
        std::cout << this->pop() << "\n";
    }
}

//returns the data value stored in the node that is popped off the stack.
//Since the stack is FIFO the the head is always popped off the stack.
int Stack::pop()
{
    if (this->head != NULL)
    {
        //store the data of current head, then move head pointer to the next node and decrease
        //the length of the stack, return the stored int
        int a = (this->head)->getData();
        (this->head) = (this->head)->getNext();
        this->length = this->length - 1;
        return a;
    }
    else
    {
        std::cout << "StackError\n";
        return 0;
    }
}