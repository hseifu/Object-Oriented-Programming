//Done by Henok Seifu
#include <iostream>
#ifndef STACK
#define STACK
using namespace std;

template <class T>
class Stack{
        T* arr;//array of T type elements
        int size;//size of array 
        int entry;//number of entries
        //or the entry with the first empty element
        public:
            Stack();
            Stack(const Stack& s);
            Stack(int sz);
            bool push(T element);
            bool pop(T& out);
            T back();
            int getNumEntries();
            ~Stack();
            void extend();
            int getsize() {return size;}
};


template <class T>
Stack<T>::Stack(){//empty constructor intialized to 10 in size
    arr = new T[10];
    if(!arr){
        cout << "Unable to allocate memory " << endl;
        exit(1);
    }
    entry = 0;
    size = 10;
}

template <class T>
Stack<T>::Stack(int sz){//parameterized constructor initialized with called int
    arr = new T[sz];
    entry = 0;
    size = sz;
}

template <class T>
void Stack<T>::extend(){//extend size two times 
    T* newarr = new T[2 * (size)];
    if(!newarr){
        cout << "Unable to allocate memory " << endl;
        exit(2);
    }
    for(int i = 0; i < size; i++){
        newarr[i] = arr[i];
    }
    delete[] arr;
    arr = newarr;
    size *= 2;
}

template <class T>
Stack<T>::Stack(const Stack& s){//copy everything from one instance to another
    size = s.size;
    arr = new T[s.size];
    if(!arr){
        cout << "Unable to allocate memory " << endl;
        exit(3);
    }
    for (int i=0;i<s.entry;i++){
        arr[i] = s.arr[i];
    }
    entry = s.entry;
}

template <class T>
bool Stack<T>::push(T element){//push to stack 
    if(entry >= size){//if size is full then extend 
        this->extend();
    }
    arr[entry] = element;
    entry ++;
    return true;
}

template <class T>
bool Stack<T>::pop(T& out){
    if(entry == 0){//if there are nooo entries in the list
        cerr << "Unable to pop "<<endl;//print to error
        return false;
    }
    else{//else return the top element
        out = arr[entry-1];

        entry--;
        return true;
    }
}

template <class T>
T Stack<T>::back(){
    return arr[entry-1];//return the last element is stack
}

template <class T>
int Stack<T>::getNumEntries(){
    return entry;//return the number of elements registered
}

template <class T>
Stack<T>::~Stack(){
    delete arr;//delete array 
}
#endif