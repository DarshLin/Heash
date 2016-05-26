/*
  Darsh Lin
  CSPC 2430
  5/26/16

  V1: Trying to make the Heash the master class with it including the other
  two so everything just includes heash.
 */




#ifndef HEASH
#define HEASH

#include <iostream>
#include "Heap.h"
#include "Hash.h"

using namespace std;

class heash
{
 public:
  heash();
  
  bool insert(const int &item);
  int deleteMin();
  void print();
  bool remove(int & item);
  bool find(const int & item);
  
  heaper heap1;
  hashTable hash1;

  
};

#endif
