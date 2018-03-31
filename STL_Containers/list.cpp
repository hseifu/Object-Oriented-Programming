//Done by Henok Seifu
#include <iostream>
#include <fstream>
#include <list>
using namespace std;

int main(){
    //create lists
    list<int> A;
    list<int> B;
    int toread;
    //open output file
    fstream out("listb.txt",fstream::out);
    if(!out.good()){
        cerr << "unable to open file " << endl;
        exit(1);
    }

    //read
    while(1){
        cin >> toread;
        if(toread < 1){
            break;
        }
        A.push_back(toread);
        B.push_front(toread);
    }

    //print A to stdout
    list<int>::iterator it;
    for(it = A.begin();it != A.end();it++){
        cout << *it << " ";
    }

    //print B to file
    list<int>::iterator it2;
    for(it2 = B.begin();it2 != B.end();it2++){
        out << *it2 << " ";
    }
    cout << endl;

    //move last to first
    int temp1 = A.front();
    int temp2 = B.front();
    A.erase(A.begin());
    B.erase(B.begin());
    A.push_back(temp1);
    B.push_back(temp2);

    //print into stdout
    //print with comma
    list<int>::iterator it3;
    list<int>::iterator toend;
    toend = A.end();
    toend--;
    for(it3 = A.begin();it3 != toend;it3++){
        cout << *it3 <<", ";
    }
    cout << *it3 << endl;

    list<int>::iterator it4;
    list<int>::iterator toend2;
    toend2 = B.end();
    toend2--;
    for(it4 = B.begin();it4 != toend2;it4++){
        cout << *it4 <<", ";
    }
    cout << *it4 << endl;

    //merge and sort and print
    A.merge(B);
    A.sort();

    list<int>::iterator itprint;
    list<int>::iterator toend3;
    toend3 = A.end();
    toend3--;
    for(itprint = A.begin();itprint != toend3;itprint++){
        cout << *itprint <<", ";
    }
    cout << *itprint << endl;

    out.close();
    return 0;
}