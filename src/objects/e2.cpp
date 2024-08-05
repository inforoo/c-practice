#include <iostream>

using namespace std;

class A{
      public:
             A() { k(); }
             void k() { m(); }
             void m() { printf("A"); }
      };

class B: public A{
      public:
             B() { k(); }
             void m() { printf("B"); }
      };

int main()
{ B b;
  getchar();
}
