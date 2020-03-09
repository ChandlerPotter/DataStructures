#include "queue.h"
#include <cstddef>
#include <iostream>
#include <string.h>

Queue::Queue()
{
    this->head = NULL;
    this->tail = NULL;
}

Queue::~Queue()
{
    std::cout << "Deleting Queue" << std::endl;
    //delete head;
    //delete tail;
}

Node *Queue::getHead()
{
    return this->head;
}

bool Queue::isEmpty()
{
    return (this->head == NULL);
}

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
}

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
        return a;
    }
    else
    {
        std::cout << "QueueError" << std::endl;
        return 0;
    }
}

void Queue::printQueue()
{
    while (this->head != NULL)
    {
        std::cout << (this->head)->getData() << std::endl;
        this->head = (this->head)->getNext();
    }
}