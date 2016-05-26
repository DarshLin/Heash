#include "Heash.h"

heash::heash():
heap1(53),hash1(53)
{}

bool heash::insert(const int &item)
{
  heap1.insert(item);
  hash1.insertHash(item);
  return true;
}

int heash::deleteMin()
{
  return -1;
}

bool heash::remove(int & item)
{
  return false;
}

bool heash::find(const int & item)
{
  return false;
}

void heash::print()
{
  cout << "Heap: ";
  heap1.printHeap();
  cout << endl;
  cout << "Hash: ";
  hash1.printHash();
}
