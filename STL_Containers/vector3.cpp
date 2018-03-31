//Done by Henok Seifu
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    //initialize integer vector and register values
    vector<int> Myvec;
    for(int i = 1; i <= 30; i++){
        Myvec.push_back(i);
    }

    //add 5 to the end
    Myvec.push_back(5);

    //reverse the vector
    reverse(Myvec.begin(),Myvec.end());

    //print with iterator
    vector<int>::iterator iter;
    for(iter = Myvec.begin(); iter != Myvec.end(); iter++){
        cout << *iter << " ";
    }
    cout << "\n";

    //find and replace value in the vector
    replace(Myvec.begin(), Myvec.end(), 5, 129);

    //print again
    vector<int>::iterator iter2;
    for(iter2 = Myvec.begin(); iter2 != Myvec.end(); iter2++){
        cout << *iter2 << " ";
    }
    cout << "\n";

    return 0;
}