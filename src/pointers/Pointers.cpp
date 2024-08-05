#include <iostream>

using namespace std;

//pass by value
void Swap(int a, int b);
//pass by reference
void realSwap(int &, int &); 
//pass by pointer 
void realSwap2(int* a, int* b);


int main()
{ 
  int p=1, q=2;
  Swap(p,q);
  cout << p << q << endl;

  realSwap(p,q);
  cout << p << q << endl;
  
  realSwap2(&p,&q);
  cout << p << q << endl;

  int* pp=&p; 
  int* qq=&q;
  cout << pp << ' '<< qq << endl;
  int c=(int)pp, d=(int)qq;
  cout << c << ' '<< d << endl;
  realSwap(c, d);
  cout << *(int*)c << *(int*)d << endl;
  realSwap2(pp,qq);
  cout << p << q << endl;

  getchar();

}

void Swap(int a, int b){
     int t=a; a=b; b=t;
     }

void realSwap(int &a, int &b){
     int t=a; a=b; b=t;  
     }

void realSwap2(int* a, int* b){
     int t=*a;
     *a=*b;
     *b=t;
     }
