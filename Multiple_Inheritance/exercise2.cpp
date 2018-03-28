//Done by Henok Seifu
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(){cout<<"Empty constructor for A"<<endl;}
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
    //solved by crearting an empty constructor for A
};
 
int main()
{
    D d;
    d.print();
    return 0;
}