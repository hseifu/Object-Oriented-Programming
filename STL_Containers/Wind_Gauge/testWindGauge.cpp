//Done by Henok Seifu
#include "WindGauge.h"
using namespace std;

int main(){
    //create object
    WindGuage A (12);

    //register the values
    A.currentWindSpeed(15);
    A.currentWindSpeed(16);
    A.currentWindSpeed(12);
    A.currentWindSpeed(15);
    A.currentWindSpeed(15);

    //show data
    A.dump();

    //register
    A.currentWindSpeed(16);
    A.currentWindSpeed(17);
    A.currentWindSpeed(16);
    A.currentWindSpeed(16);
    A.currentWindSpeed(20);
    A.currentWindSpeed(17);
    A.currentWindSpeed(16);
    A.currentWindSpeed(15);
    A.currentWindSpeed(16);
    A.currentWindSpeed(20);

    //show data
    A.dump();

    return 0;                        
}