//Done by Henok Seifu
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
    //initialise vector
    vector<int> v1;
    //push the element 8 20 times
    for(int i = 0; i < 20; i++){
        v1.push_back(8);
    }
    //try to access the 21st element
    try{
        v1.at(20);
    }
    //catch the error and print
    catch(const out_of_range& oor){
        cerr << "Error " << oor.what() << endl;
    }
    return 0;
}