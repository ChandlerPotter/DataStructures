#include "minHeap.h"
#include <iostream>
using namespace std;

int main()
{
    minHeap h(10);
    h.insertKey(15);
    h.insertKey(22);
    h.insertKey(5);

    cout << "size: " << h.getSize() << endl;
    cout << "min: " << h.getMin() << endl;
}