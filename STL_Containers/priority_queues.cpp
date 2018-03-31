//Done by Henok Seifu
#include <queue>
#include <iostream>
using namespace std;

int main(){
    int i;
    priority_queue<int> mypq;//initilaization of container

    //testing push method
    cout << "Pushing integers 1 - 10 into priority queue" << endl;
    for(i = 1; i <= 10; i++){
        mypq.push(i);
    }


    //testing pop method
    cout << "Popping top element from the PQ" << endl;
    mypq.pop();

    //testing size method
    cout << "My PQ currently has " << mypq.size() << " elements." << endl;

    //testing top method
    cout << "The top element in my PQ is " << mypq.top() << endl;
    // returns the top element in the heap since priority queue is implemented as 
    //heap data structure 

    return 0;
}