#ifndef _H_HEAPSORT
#define _H_HEAPSORT

void troca(int* a, int* b);
void heapify(int arr[], int size, int i);
void transforma_heap(int arr[], int size);
void heapsort(int arr[], int size);
void printArray(int arr[], int size);

#endif