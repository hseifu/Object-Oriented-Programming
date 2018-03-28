#include <iostream>
 
#include "Complex.h"
using namespace std;
int main(){
    //input objects
    ifstream in1;
    in1.open("in1.txt",ios::in);
    if(!in1.good()){
        std::cout<<"Error opening file"<<std::endl;
        exit(1);
    }
 
    ifstream in2;
    in2.open("in2.txt",ios::in);
    if(!in2.good()){
        std::cout<<"Error opening file"<<std::endl;
        exit(1);
    }
    
    //output objects
    ofstream out;
    out.open("output.txt",ios::out);
    if(!out.good()){
        cout<<"Error opening file"<<endl;
        exit(1);
    }
 
    Complex a,b,res;
 
    in1 >> a;
    in2 >> b;
    res = a*(b-a);
 
    out << a+b;
    out << a*b;
    out << a-b;
    out << res;
 
    cout << a+b;
    cout << a*b;
    cout << a-b;
    cout << res;
 
    return 0;
}