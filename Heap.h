/*
  Darsh Lin
  CSPC 2430
  5/26/2016

  V1: So far everything is on public just because it would be easier for access
  due to linking difficulties.
 */




#ifndef HEAP
#define HEAP

#include <iostream>

using namespace std;

class heaper
{

  public:
  heaper(int size);
  bool insert(const int &item);
  void printHeap();
  int deleteMin();
  int* data;
  
  int arraySize;
  int heapSize;
  void percolateUp(int index);
  void percolateDown(int currIndex);
  int findLastIndex();
  int getLeftChild(int elementIndex);
  int getRightChild(int elementIndex);
  int getParent(int elementIndex);

   
};

#endif
