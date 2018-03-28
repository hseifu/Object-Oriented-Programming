//Done by Henok Seifu
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: public virtual A
//by inheriting as virtual, we avoid the ambiguity 
//of having multiple base class variables
//My motivation is that just like virtual functions,
//when using virtual class, the call of properties in
//above class identifies the class which is being called
//from
{
public:
  B()  { setX(10); }
};
 
class C:  public virtual A  
//by inheriting as virtual, we avoid the ambiguity 
//of having multiple base class variables
//My motivation is that just like virtual functions,
//when using virtual class, the call of properties in
//above class identifies the class which is being called
//from
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
    //the problem is that this class is created as a 
    //child of two parents from the same parent therefore
    //inheriting the grand parant's properties multiple times
    //this can be solved by making both parents inherit virtually
};
 
int main()
{
    D d;
    d.print();
    return 0;
}