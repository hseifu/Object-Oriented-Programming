//Done by Henok Seifu
#include <iostream>
#include <set>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //initialize int set and assign random values
    set<int> lotto;
    srand(static_cast<unsigned int>(time(0)));//initialize time
    for(int i = 0; i < 6; i++){
        lotto.insert(rand() % 49 + 1);//append random values
    }

    //iterate and print
    set<int>::iterator iter;
    for(iter = lotto.begin(); iter != lotto.end(); iter++){
        cout << *iter << " ";
    }
    cout << "\n";

    return 0;
}