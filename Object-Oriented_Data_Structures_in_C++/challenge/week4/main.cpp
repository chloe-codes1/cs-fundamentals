#include <iostream>
#include "Pair.h"

/* Class Pair has already been
 * declared and defined with the
 * following constructor:
 *
 *   Pair(int,int)
 *
 * that stores its two arguments in
 * two private member variables of Pair.
 *
 * Class sumPair has also already been
 * defined as follows:
 *
 * class sumPair : public Pair {
 * public:
 *   int sum;
 *   sumPair(int,int);
 * };
 *
 * Implement the constructor
 * sumPair(int,int) such that it
 * loads the two member variables of
 * the base Pair class with its
 * arguments, and initializes the
 * member variable sum with their sum.
 */

Pair::Pair(int a, int b)
{
  pa = new int(a);
  pb = new int(b);
}

Pair::Pair(const Pair &obj)
{
  pa = new int(*obj.pa);
  pb = new int(*obj.pb);
}

Pair::~Pair()
{
  delete pa;
  delete pb;
}

class sumPair : public Pair
{
public:
  int sum;
  sumPair(int, int);
};

sumPair::sumPair(int a, int b) : Pair(a, b), sum(a + b) {}

/* Below is a main() function
 * you can use to test your
 * implementation of the
 * sumPair constructor.
 */

int main()
{
  sumPair sp(15, 16);
  std::cout << "sp(15,16).sum =" << sp.sum << std::endl;
  return 0;
}
