#include "node.h"
#include <iostream>
using namespace std;

int main()
{
    Node *a = new Node(6);
    Node *b = new Node(5);
    a->setData(10);
    a->setNext(b);

    cout << "Node *a: " << (a->getNext())->getData() << endl;
    cout << "Node a: " << a->getData() << endl;
}