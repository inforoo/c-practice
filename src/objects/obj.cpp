#include <iostream>
#include <fstream>

using namespace std;

ofstream out("t.txt");

class A{
      public:
             A() { out<<"A"; }
             ~A(){ out<<"~A"; }
      };

class C{
      public:
             C() {out<<"C";}
             ~C(){ out<<"~C"; }
      };

class D{
      public:
             D() {out<<"D";}
             ~D(){ out<<"~D"; }
      };
             

class B: public A{
      private:
             C c;
             D d; 
      public:             
             B() { out<<"B"; }
             ~B(){ out<<"~B"; }                
      };

int main(){
    {
     out<<"[";           
     A a;
     out<<"][";
     B b;
     out<<"]\n[";
     A* aa = new A;    
     out<<"][";
     B* bb = new B;
     out<<"][";
     delete aa;
     out<<"][";
     delete bb;
     out<<"]\n";           
    }           
}
     
  
/*

void flag(){
     A a;
     out<<"---";
     B b;
     out<<"---";
     A* aa = new A;    
     out<<"---";
     B* bb = new B;
     out<<"---";
     delete aa;
     out<<"---";
     delete bb;
     out<<"---";
     }
     */
//for (x=0 ; x<SOMENUMBER ; ++x)
//{
//    cout << (x != 0) ? "\t" : "" << "[" << x << "]";
//}



