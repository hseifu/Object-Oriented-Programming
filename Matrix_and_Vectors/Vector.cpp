//Done by Henok Seifu
#include <iostream>
#include "Vector.h"
using namespace std;

Vector::Vector(int a){
    arr = new int[a];
    for(int i=0;i<a;i++){
        arr[i] = 0;
    }
    size = a;
}
Vector::~Vector(){
    delete [] arr;
}

int Vector::operator [](int i) const{
    return this->arr[i];
}