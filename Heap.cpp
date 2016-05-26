#include "Heash.h"

heaper::heaper(int size):
  heapSize(0)
{
  //hashTable heapHash;
  arraySize = size;
  int i;
  data = new int[arraySize];

  for(i = 0; i < arraySize; i++)
	data[i] = -1;
}

bool heaper::insert(const int &item)
{
  if(heapSize == arraySize) {
	cerr << "There are too many elements in the heap" << endl;
	return false;
  }
  else {
	heapSize++;
	int index = heapSize-1;
	data[index] = item;

	percolateUp(index);
  }
  return true;
}


void heaper::percolateUp(int index)
{
  int parentIndex, temp;
  parentIndex = getParent(index);
 
  while(data[parentIndex] > data[index]) {
  	  temp = data[index];
  	  data[index] = data[parentIndex];
	  data[parentIndex] = temp;

	  percolateUp(parentIndex);
  }
  
}

void heaper::percolateDown(int currIndex)
{
  int left, right, min, temp;
  left = getLeftChild(currIndex);
  right = getRightChild(currIndex);

  if(right >= heapSize)
	{
	  if(left >= heapSize)
		return;
	  else min = left;
	}
  else
	{
	  if(data[left] <= data[right])
		min = left;
	  else
		min = right;
	}

  if(data[currIndex] > data[min])
	{
	  temp = data[min];
	  data[min] = data[currIndex];
	  data[currIndex] = temp;
	  percolateDown(min);
	}
  
}


int heaper::getLeftChild(int elementIndex)
{
  return 2 * elementIndex +1;
}

int heaper::getRightChild(int elementIndex)
{
  return 2 * elementIndex +2;
}

int heaper::getParent(int elementIndex)
{
  return (elementIndex-1) /2;
}

int heaper::findLastIndex()
{
  int i = 0;
  while(data[i] >= 0) {
	++i;
  }
  return i-1; //So I don't have to subtract 2 every time
}


void heaper::printHeap()
{
  for(int p = 0; p < arraySize; p++)
	{
	  if(data[p] < 0) {
		cout << "";
	  }
	  else {
		cout <<"["<< data[p] << "]";
	  }
	}
}

int heaper::deleteMin()
{
  int temp = data[0]; //Just for a return
  int lastIndex = findLastIndex();
  int lastTemp = data[lastIndex];
  data[lastIndex] = -1;
	
  data[0] = lastTemp;

  heapSize--;

  if(lastIndex > 0) {
	percolateDown(0);
  }

  return temp;
}
