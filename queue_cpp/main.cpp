#include "node.h"
#include "queue.h"
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    Queue q;
    string data;
    string out;

    cout << "Enter 'enqueue' or 'quit': " << endl;
    cin >> data;
    while (data != "quit")
    {
        if (data == "enqueue")
        {
            cout << "Enter 'dequeue', a number to enqueue, or 'quit' to exit: " << endl;
            cin >> out;
            if (out == "dequeue")
            {
                if (q.getLength() == 0)
                {
                    cout << "Queue is empty, cannot deuque" << endl;
                }
                else
                {
                    q.dequeue();
                }
            }
            else if (out == "quit")
            {
                break;
            }
            else
            {
                q.enqueu(stoi(out));
            }
        }
    }
    q.printQueue();
}