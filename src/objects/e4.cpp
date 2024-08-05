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

class C: public B{
        public:
               C() { k(); }
               void m() { printf("C"); }
       };
 
int main()
{ C c;
  getchar();
}
