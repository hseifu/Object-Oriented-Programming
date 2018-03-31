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

    //testing I/O operators
    try{
        std::cout << "Please enter the fraction " << std::endl;
        std::cin >> J;
        std::cout << "The fraction you input in simplified form is " << std::endl;
        std::cout << J;
    }
    catch(const char* err){
        std::cerr << err << std::endl;
    }


    std::cout << "Passed: " << nPass << " tests" << std::endl << "Failed: " << nFail << " tests" << std::endl;

    return 0;
}
