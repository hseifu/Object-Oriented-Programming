#ifndef COMPLEX
#define COMPLEX
 
#include <iostream>
#include <fstream>
using namespace std;
 
class Complex {
 
private:
    float real;  // real part
    float imaginary;  // imaginary part
 
public:
    Complex();
    // empty constructor
    Complex(double, double);
    // constructor taking values for real and imaginary parts
    ~Complex();
    //destructor
 
    //implementation of the operators 
    friend istream& operator >> (istream& is, Complex& c1){
        int x,y;
        is >> x;
        is >> y;
        c1.real = x;
        c1.imaginary = y;
        return is;
    }
    friend ostream& operator << (ostream& os, const Complex& c1){
        if(c1.imaginary!=0){
        os << noshowpos << c1.real << showpos << c1.imaginary <<"i"<<endl;
        }
        else{
            os << noshowpos << c1.real << endl;
        }
        return os;
    }
    Complex operator + (const Complex);
    Complex operator - (const Complex);
    Complex operator * (const Complex);
    void operator = (const Complex);
    //declaring operator overloading 
};
 
#endif