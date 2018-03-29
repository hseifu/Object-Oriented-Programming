//Done by Henok Seifu
#include <iostream>
#include "Complex.h"
using namespace std;
 
 
//generic function 
template <class T>
int array_search(T arr[], T t, int size){
    int count = 0;
    for(int i=0; i<size ; i++){
        //operator == was overloaded to compare two complexes
        if(arr[i] == t){
            count++;
        }
    }
    if(count==0){
        return -1;
    }
    else{
        return count;
    }
}
 
int main(){
    int iarr[] = {2,5,62,2,56,55,2};
    float farr[] = {4.9,34.54,4.66};
    double darr [] = {3323423.2343343,34432.54,8765.6556622,4};
    Complex a(1,3);
    Complex b(5,7);
    Complex c(2,6);
    Complex carr[] = {a,b,c,a};
    cout << "the value " << iarr[2] << " appears in iarr " << array_search<int>(iarr, iarr[2], 7) << " times" << endl;
    cout << "the value " << farr[2] << " appears in farr " << array_search<float>(farr, farr[2], 3) << " times" << endl;
    cout << "the value " << darr[2] << " appears in darr " << array_search<double>(darr, darr[2], 4) << " times" << endl;
    cout << "the value " << a << " appears in carr " << noshowpos << array_search<Complex>(carr, a, 4) << " times" << endl;
    return 0;
}