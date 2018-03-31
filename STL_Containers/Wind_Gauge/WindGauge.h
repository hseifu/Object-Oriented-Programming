//Done by Henok Seifu
#include <iostream>
#include <deque>
using namespace std;

class WindGuage{
    private:
        int period;//period for holding number of entries
        deque<int> Speeds;//container for holding entries
    public:
        WindGuage(int period = 12) : period(period){};//parameter constructor
        void currentWindSpeed(int speed);//to add speed
        int highest() const;
        int lowest() const;
        int average() const;
        void dump() const;
    
};