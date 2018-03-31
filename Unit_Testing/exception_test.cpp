//Done by Henok Seifu
#include "Fraction.h"

//test function with global variables
int nPass = 0, nFail = 0;
void test(bool t) {
	if (t) {
		nPass++;
    }
	else{
		nFail++;
    }
}

int main(){
    Fraction A(-5,6);
    Fraction B("-5/6");
    Fraction C("4/3");
    Fraction D(A);
    Fraction E("-23/2");
    Fraction F(13,6);
    Fraction G(-20,18);
    Fraction H;
    Fraction J;

    //testing assignment operator
    try{
        Fraction I = G;
    }
    catch(const char* s){
        std::cerr << s << std::endl;
    }

    //test constructors with good data
    try{
        Fraction t1("7/4");
        nPass++;
    }
    catch(const char* s){
        std::cerr << s << std::endl;
    }

    //testing exception with bad data
    try{
        Fraction bad("493");
        nPass++;
    }
    catch(const char* s){
        std::cerr << s << std::endl;
    }


    std::cout << "Passed: " << nPass << " tests" << std::endl << "Failed: " << nFail << " tests" << std::endl;

    return 0;
}
