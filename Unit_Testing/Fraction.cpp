//Done by Henok Seifu
#include "Fraction.h"
#include <vector>
#include <sstream>
#include <iostream>


// string parameter constructor
Fraction::Fraction(std::string info){

    // split at '/' sign 
    std::string delimiter = "/";
    std::size_t position = info.find(delimiter);

    // if delimiter is not found throw an error
    if(position == std::string::npos) throw "Invalid data or logical error";

    // assign the value before the '/' as an int to the numerator
    int num = atoi(info.substr(0,position).c_str());

    // assign the string after the delimiter as integer to the denominator
    int denom = atoi(info.substr(info.find(delimiter)+1).c_str());

    numerator = num/gcd(num,denom);
    denominator = denom/gcd(num,denom);

}

// Empty constructor
Fraction::Fraction()
{
	numerator = 1;
	denominator = 1;
}

// Parameter constructor with ints
Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	numerator = n / tmp_gcd;
	denominator = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{// implementation of gcd method
	if (b==0) {
        return a;
	}
    return gcd(b, a%b);
}

int Fraction::lcm(int a, int b)
{// definition of the lcm method
	return a * b / gcd(a, b);
}



Fraction Fraction::operator*(const Fraction& a)
{// defining the '*' operator overloading
    Fraction res;
    res.numerator = a.numerator;
    res.denominator = a.denominator;
    res.numerator *= numerator;
    res.denominator *= denominator;
    return res;
}

Fraction Fraction::operator/(const Fraction& a)
{// defining the '/' operator overloading
    Fraction res;
    res.numerator = (numerator * a.denominator) / gcd(numerator, a.denominator);
    res.denominator = (denominator * a.numerator) / gcd(denominator, a.numerator);
    return res;
}

Fraction Fraction::operator+(const Fraction& a)
{//defining the '+' operator overloading
    int numerator, denominator;
    denominator = lcm(this->denominator, a.denominator);
    numerator = (this->numerator*denominator)/(this->denominator) + (a.numerator*denominator)/(a.denominator);
    
    Fraction res(numerator, denominator);
    return res;
}

Fraction Fraction::operator-(const Fraction& a)
{//defining the '-' operator overloading
    int numerator, denominator;
    denominator = lcm(this->denominator, a.denominator);
    numerator = (this->numerator*denominator)/(this->denominator) - (a.numerator*denominator)/(a.denominator);
    Fraction result(numerator, denominator);
    return result;
}




