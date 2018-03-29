//Done by Henok Seifu

#include <iostream>
#ifndef LIST
#define LIST
using namespace std;
template <class T>//node that carries generic info
struct Node{
    T item;
    Node* next;
    Node* prev;
};
 
template <class T>//generic list
class List{
    public:
        Node<T>* first;//pointer to first element
        Node<T>* last;//pointer to last element
        int entry;//number of elements
        List();
        ~List();
        //adding methods take a generic node reference
        bool addfirst(Node<T>& to_add);
        bool addlast(Node<T>& to_add);
        //return a generic data
        T retfirst();
        T retlast();
        //pop methods take generic data refernece to copy popped element
        //return true if successful returns false else
        bool popfirst(T& out);
        bool poplast(T& out);
        int retentry();
        
};

//initalize
template <class T>
List<T>::List(){
    first = NULL;
    last = NULL;
    entry = 0;
}


template <class T>
bool List<T>::addfirst(Node<T>& to_add){
    Node<T>* newn = new Node<T>;//allocate and check if properly allocated
    if(!newn){
        cout << "Unable to allocate memory " << endl;
        return false;
    }
    newn->item = to_add.item;//set value
    newn->prev = NULL;//since its first there should be nothing behind it
    if(entry == 0){//if empty point first and last to the new node 
        first = newn;
        last = newn;
        newn->next = NULL;
    }
    else{//if not rearrange values to include the new node
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    entry++;//increase number of elements
    return true;
}

template <class T>
bool List<T>::addlast(Node<T>& to_add){
    Node<T>* newn = new Node<T>;//allocate and check if properly allocated
    if(!newn){
        cout << "Unable to allocate memory " <<endl;
        return false;
    }
    newn->item = to_add.item;//set value
    newn->next = NULL;//since its first there should be nothing behind it
    if(entry == 0){//if empty point first and last to the new node 
        first = newn;
        last = newn;
        newn->prev = NULL;
        entry++;
    }
    else{//if not rearrange values to include the new node
        newn->prev = last;
        last->next = newn;
        last = newn;
        entry++;
    }
    return true;
}

template <class T>
T List<T>::retfirst(){//return first item
    return first->item;
}

template <class T>
T List<T>::retlast(){//return last item
    return last->item;
}

template <class T>
bool List<T>::popfirst(T& out){
    if(entry == 0){//if empty
        cerr << "Unable to pop "<<endl;//print to error
        return false;
    }
    Node<T>* temp = first->next;//copy before losing connection
    out = first->item;//set value
    delete first;//free memory
    if(entry == 1){//if only there was only one element
        last = NULL;
        first = NULL;
    }
    else{//if not
        first = temp;
        first->prev = NULL;
    }
    entry--;//decrease number of elements
    return true;
}

template <class T>
bool List<T>::poplast(T& out){
    if(entry == 0){//if empty
        cerr << "Unable to pop "<<endl;//print to error
        return false;
    }
    Node<T>* temp = last->prev;//copy before losing connection
    out = last->item;//set value
    delete last;//free memory
    if(entry == 1){//if only there was only one element
        last = NULL;
        first = NULL;
    }
    else{//if not
        last = temp;
        last->next = NULL;
    }
    entry--;//decrease the number of elements
    return true;
}

template <class T>
int List<T>::retentry(){//return number of elements
    return entry;
}

template <class T>
List<T>::~List(){//destructor
}

#endif