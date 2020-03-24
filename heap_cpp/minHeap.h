#ifndef MINHEAP_H
#define MINHEAP_H

class minHeap
{
public:
    minHeap(int capacity);
    int getSize() { return this->size; }
    int getMin() { return heapArr[0]; }
    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return (2 * i) + 1; }
    int right(int i) { return (2 * i) + 2; }
    void insertKey(int k);
    void deleteKey(int i);
    void minHeapify(int);
    void swap(int *x, int *y);
    int extractMin();
    void heapPrint();

private:
    int size;
    int *heapArr;
    int capacity;
};
#endif