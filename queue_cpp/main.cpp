#include "node.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
    Queue q;
    for (int i = 0; i < 10; i++)
    {
        q.enqueu(i);
    }

    for (int j = 0; j < 10; j++)
    {
        cout << "removed: " << q.dequeue() << endl;
    }
}