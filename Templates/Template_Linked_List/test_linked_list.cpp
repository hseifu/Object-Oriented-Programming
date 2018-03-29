//Done by Henok Seifu

#include "LinkedList.h"
using namespace std;

int main() {
    //create a list with desired data type
    List<string> A;
    //get data
    string name1;
    cout << "Enter first name " << endl;
    cin >> name1;
    string name2;
    cout << "Enter second name " << endl;
    cin >> name2;
    //assign to respective data type nodes
    Node<string> Anode;
    Anode.item = name1;
    Node<string> Bnode;
    Bnode.item = name2;
    //test adding methods
    A.addfirst(Bnode);
    A.addlast(Anode);
    //test printing methods
    Node<string> resfir;
    resfir.item = A.retfirst();
    cout << "Print first without pop " << resfir.item << endl;
    Node<string> reslast;
    reslast.item = A.retlast();
    cout << "Print last without pop " << reslast.item << endl;
    //test method to return the number of elements
    cout << "Currently the List has " << A.retentry() << " elements\n";
    //test pop methods
    string popped1;
    A.popfirst(popped1);
    cout << "The popped element is " << popped1 << endl;
    string popped2;
    A.poplast(popped2);
    cout << "The popped element is " << popped2 << endl;
    //check if popping empty list is possible
    A.popfirst(popped2);

    return 0;
    
}