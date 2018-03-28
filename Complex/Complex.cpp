/*
    CH08-320143
    a1_p1.cpp
    Henok Seifu
    hseifu@jacobs-university.de
*/
 
#include <iostream>
#include "Complex.h"
using namespace std;
 
Complex::Complex(){
    real = 0;
    imaginary = 0;
}//defining default constructor
 
Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}//defining constructor with values
 
 
 
Complex::~Complex(){
}//defining destructor
 
 
 
Complex Complex::operator + (const Complex c1)  {
    int a,b;
    a = this->real + c1.real;
    b = this->imaginary + c1.imaginary;
    Complex res(a,b);
    return res;
}
 
Complex Complex::operator - (const Complex c1)  {
    int a,b;
    a = this->real - c1.real;
    b = this->imaginary - c1.imaginary;
    Complex res(a,b);
    return res;
}
 
Complex Complex::operator * (const Complex c1)  {
    int a,b;
    a = this->real * c1.real + this->imaginary * c1.imaginary;
    b = this->imaginary * c1.real + this->real * c1.imaginary;
    Complex res(a,b);
    return res;
}
 
void Complex::operator = (const Complex c1)  {
    this->real = c1.real;
    this->imaginary = c1.imaginary;
}