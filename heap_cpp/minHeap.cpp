#include "minHeap.h"
#include <iostream>
using namespace std;

//Swaps two integer values in place.
void minHeap::swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//minHeap constructor, default size is zero and user determines capacity with cap parameter
minHeap::minHeap(int cap)
{
    size = 0;
    capacity = cap;
    heapArr = new int[cap];
}

//Inserts a new value into the heap. The while loop maintains the heap condition that the parent of a node is always smaller
//than the value of the node itself.
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

//Deletes a key at the given index, i. It works by "floating" the desired key to the root of the heap by changing
//its value to INT_MIN and comparing it each parent node until it reaches the root (since INT_MIN is the smallest int possible).
//Then extractMin() is called where the new root is then removed from the heap. This process ensures that the min heap property
//is maintained.
void minHeap::deleteKey(int i)
{
    heapArr[i] = INT_MIN;
    while (i != 0 && heapArr[parent(i)] > heapArr[i])
    {
        swap(&heapArr[parent(i)], &heapArr[i]);
        i = parent(i);
    }
    extractMin();
}

//Removes and returns the root of the heap by storing the value then moving it to the end of the list and shortening the list by one.
//To maintain the heap property minHeapify is called on the root. Since the root is now the largest value in the heap due to the
//heapArr[0] = heapArr[size - 1] line.
int minHeap::extractMin()
{
    if (size <= 0)
    {
        return INT_MAX;
    }
    if (size == 1)
    {
        getMin();
    }

    int root = heapArr[0];
    heapArr[0] = heapArr[size - 1];
    size--;
    minHeapify(0);

    return root;
}

//Compares the left and right children of the "smallest" node and swaps them if neccesary, continues to call itself until min heap
//property is satisfied.
void minHeap::minHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l <= size && heapArr[l] < heapArr[i])
    {
        smallest = l;
    }
    if (r <= size && heapArr[r] < heapArr[smallest])
    {
        smallest = r;
    }
    if (smallest != i)
    {
        swap(&heapArr[i], &heapArr[smallest]);
        minHeapify(smallest);
    }
}

//Iterates through the list the heap is built on and prints each value.
void minHeap::heapPrint()
{
    for (int i = 0; i < size; i++)
    {
        cout << heapArr[i] << endl;
    }
}