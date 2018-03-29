//Done by Henok Seifu
#include "Stack.h"
using namespace std;
int main(){
    int i;
    Stack<int> A;//test empty constructor
    Stack<int> B(100);//test parameterized constructor
    Stack<float> C(10);//test different data type
    
    //test push
    for(i = 0; i < 20; i++)
        A.push(i*2);//pushing to more than allocated size 
    for(i = 0; i < 100; i++)
        B.push((int)i/2);
    for(i = 0; i < 10; i++)
        C.push(i/5.0);

    Stack<float> D(C);//test copy constructor 

    int out;
    B.pop(out);//test pop

    int out1;
    int out2;

    //test getNumEntries back, pop and get size
    for(i = 0; i < 10; i++){
        A.pop(out1);
        B.pop(out2);
        cout << "The number of elements in A is " << ": " << A.getNumEntries() << " but can hold upto " << A.getsize() << " and the last element is " << out1 << endl;
        cout << "The number of elements in B is " << ": " << B.getNumEntries() << " but can hold upto " << B.getsize() << " and the last element is " << out2 << endl;
        cout << "The number of elements in C is " << ": " << C.getNumEntries() << " but can hold upto " << C.getsize() << " and the last element is " << C.back() << endl;
        cout << "The number of elements in D is " << ": " << D.getNumEntries() << " but can hold upto " << D.getsize() << " and the last element is " << D.back() << endl;
    }
    
    //check what happenes when popping from empty stack
    A.pop(out1);
    A.push(67);
    cout << A.back() << endl;
    return 0;
}