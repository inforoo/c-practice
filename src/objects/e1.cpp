#include <iostream>

using namespace std;

class A{
      public:
             A() { m(); }
             void m() { printf("A"); }
      };

class B: public A{
      public:
             B() { m(); }
             void m() { printf("B"); }
      };

int main()
{ B b;
  getchar();
}
