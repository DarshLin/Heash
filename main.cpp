#include <iostream>
#include "Heash.h"

using namespace std;

int main()
{
  //heash h;

  heash he;

  he.insert(55);
  he.insert(42);
  he.insert(33);
  he.insert(53);
  he.insert(106);
  he.print();
  return 0;
}
