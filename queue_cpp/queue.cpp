#include "queue.h"
#include <cstddef>
#include <iostream>
#include <string.h>

//Basic Queue constructor
Queue::Queue()
{
    this->head = NULL;
    this->tail = NULL;
    this->length = 0;
}

//Queue destructor
Queue::~Queue()
{
    std::cout << "Deleting Queue" << std::endl;
    //delete head;
    //delete tail;
}

Node *Queue::getHead() { return this->head; }

int Queue::getLength() { return this->length; }

bool Queue::isEmpty() { return (this->head == NULL); }

//Places a new node at the tail of the queue. Checks if the head and tails nodes are NULL, if so makes new node
//the head and tail, otherwise it makes the new node the tail. Increments the length by 1.
void Queue::enqueu(int n)
{
    Node *other = new Node(n);

    if (this->head == NULL && this->tail == NULL)
    {
        this->head = other;
        this->tail = this->head;
    }
    else
    {
        (this->tail)->setNext(other);
        this->tail = other;
    }
    this->length = (this->length) + 1;
}

//Removes head of the queue and returns its data. Checks that the queue is not empty first, then checks if
//there is more than one node on the queue. If there is not it sets the head and tail to NULL, otherwise
//it moves the head pointer to the next node in the queue.
int Queue::dequeue()
{
    if (this->isEmpty() != true)
    {
        int a = (this->head)->getData();
        if ((this->head)->isNext() == false)
        {
            this->head = NULL;
            this->tail = NULL;
        }
        else
        {
            this->head = (this->head)->getNext();
        }
        this->length = (this->length) - 1;
        return a;
    }
    else
    {
        std::cout << "QueueError" << std::endl;
        return 0;
    }
}

//Iterates through the queue and prints the data for each node.
void Queue::printQueue()
{
    while (this->head != NULL)
    {
        std::cout << (this->head)->getData() << std::endl;
        this->head = (this->head)->getNext();
    }
}