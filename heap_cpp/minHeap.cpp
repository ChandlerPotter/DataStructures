#include "minHeap.h"
#include <iostream>
using namespace std;

void minHeap::swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

minHeap::minHeap(int cap)
{
    size = 0;
    capacity = cap;
    heapArr = new int[cap];
}

void minHeap::insertKey(int k)
{
    if (size == capacity)
    {
        cout << "Cannot insert key, heap overflow\n"
             << endl;
        return;
    }
    size++;
    int i = size - 1;
    heapArr[i] = k;

    while (i != 0 && heapArr[parent(i)] > heapArr[i])
    {
        swap(&heapArr[parent(i)], &heapArr[i]);
        i = parent(i);
    }
}