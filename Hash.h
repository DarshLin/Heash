/*
  Darsh lin
  CSPC 2430
  5/26/2016

  V1: Everything is public for now and using ints.
 */




#ifndef HASH
#define HASH

#include <iostream>
/*
  The way I am going to make the heap and hash connect together is by funneling the heap into the hash and placing them into cells by their keys(values)
 */
using namespace std;

class hashTable
{ 
 public:
  hashTable(int size);
  bool insertHash(const int &item);
  void printHash();
  bool find(const int &item);
  bool remove(int item);  
  int* hasher;
  int hashSize;
};


#endif
