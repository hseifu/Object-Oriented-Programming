//Done by Henok Seifu
#include "WindGauge.h"


void WindGuage::currentWindSpeed(int speed){
    //if container is more than needed pop
    int sz = Speeds.size();
    if(sz == period){
        Speeds.pop_front();
    }
    //then insert
    Speeds.push_back(speed);
}

int WindGuage::highest() const {
    //initialize interator
    deque<int>::const_iterator it = Speeds.begin();
    int max = *it;
    int count  = 0;
    int sz = Speeds.size();
    //while size is not reached compare and assign to max
    while(count < sz){
        if(*it > max) max = *it;
        it++;
        count++;
    }
    return max;
}

int WindGuage::lowest() const {
    //initilaize iterator
    deque<int>::const_iterator it = Speeds.begin();
    int min = *it;
    int count  = 0;
    int sz = Speeds.size();
     //while size is not reached compare and assign to min
    while(count < sz){
        if(*it < min) min = *it;
        it++;
        count++;
    }
    return min;
}

int WindGuage::average() const {
    //initilalize iterator
    deque<int>::const_iterator it = Speeds.begin();
    int sum = 0;
    int count  = 0;
    int sz = Speeds.size();
    //while size is not reached add the values
    while(count < sz){
        sum += *it;
        count++;
    }
    //return the average = sum.size
    return (sum/Speeds.size());
}

void WindGuage::dump() const {
    //print by calling the methods;
    cout << "Here is wind speed for the past " << period << " periods:" << endl;
    cout << "High of " << highest() << endl;
    cout << "Low of " << lowest() << endl;
    cout << "Average of " << average() << endl;
}
