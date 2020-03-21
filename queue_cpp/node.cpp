#include "node.h"
#include <cstddef>
#include <iostream>

//Basic Node constructor
Node::Node()
{
    this->next = NULL;
    this->prev = NULL;
    this->data = 0;
}

//Parameterized Node constructor
Node::Node(int d)
{
    this->data = d;
    this->next = NULL;
    this->prev = NULL;
}

//Node destructor
Node::~Node()
{
    std::cout << "Deleting Node" << std::endl;
    delete next;
    delete prev;
}

int Node::getData() { return this->data; }

void Node::setData(int d) { this->data = d; }

Node *Node::getNext() { return this->next; }

void Node::setNext(Node *n) { this->next = n; }

Node *Node::getPrev() { return this->prev; }

void Node::setPrev(Node *p) { this->prev = p; }

bool Node::isNext() { return !(this->next == NULL); }

bool Node::isPrev() { return !(this->prev == NULL); }