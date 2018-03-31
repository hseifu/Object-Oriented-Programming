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

    
    // test the relational operators
    test(A < C);
	test(A <= C);
	test(A != C);
	test(A == A);
	test(A >= A);
	test(A <= A);
	test(E < A);
	test(A > E);
	test(A >= E);
	test(A != E);


    std::cout << "Passed: " << nPass << " tests" << std::endl << "Failed: " << nFail << " tests" << std::endl;

    return 0;
}
