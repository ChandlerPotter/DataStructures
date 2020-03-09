#include "node.h"
#include <cstddef>
#include <iostream>

//Node constructor
Node::Node()
{
    this->next = NULL;
    this->data = 0;
}

//Node parameterized constructor
Node::Node(int d)
{
    this->data = d;
    this->next = NULL;
}

//Node destructor
Node::~Node()
{
    std::cout << "Deleting Node" << std::endl;
    delete next;
}

//returns the data (int value) contained in the node
int Node::getData()
{
    return this->data;
}

//sets the data (int value ) to be contained in the node
void Node::setData(int d)
{
    this->data = d;
}

//returns a boolean value to determine if there is a node after this one.
//Returns true if there is a next node, returns false otherwise.
bool Node::isNext()
{
    return !(this->next == NULL);
}

//Takes a node pointer as an argument and sets that as the next node to the current one.
void Node::setNext(Node *n)
{
    this->next = n;
}

//Returns a node pointer to the next node.
Node *Node::getNext()
{
    return this->next;
}