#include "minHeap.h"
#include <iostream>
using namespace std;

int main()
{
    minHeap h(10);
    h.insertKey(15);
    h.insertKey(22);
    h.insertKey(5);
    h.insertKey(81);
    h.insertKey(12);

    h.heapPrint();

    h.deleteKey(1);

    cout << "size: " << h.getSize() << endl;
    cout << "min: " << h.getMin() << endl;
    h.heapPrint();
}