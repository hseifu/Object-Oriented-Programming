//Done by Henok Seifu
#ifndef FRACTION
#define FRACTION
#include <iostream>
#include <string>
class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int n, int d); 
        Fraction(std::string info);
        int gcd(int a, int b);
        int lcm(int a, int b);
        Fraction();
        ~Fraction() {};
        Fraction(const Fraction& a){
            numerator = a.numerator;
            denominator = a.denominator;
        }
        //I/O operators
        friend void operator>>(std::istream &in, Fraction& f){
            
            std::string s;
            std::getline(in,s);
            try{
                Fraction temp(s);
                f = temp;
            }
            catch(const char* str){
                throw str;
            }
        }
        friend void operator<<(std::ostream &out, const Fraction& f)                                              
        {
            out<<f.numerator<<"/"<<f.denominator<<std::endl;;
        }


        //arithmatic operators
        Fraction operator*(const Fraction&);
        Fraction operator/(const Fraction&);
        Fraction operator+(const Fraction&);
        Fraction operator-(const Fraction&);

        //relational operators
        friend bool operator<(const Fraction& f1, const Fraction& f2) {
            return f1.numerator/f1.denominator < f2.numerator/f2.denominator;
        }
        friend bool operator>(const Fraction& f1, const Fraction& f2) {
            return f1.numerator/f1.denominator > f2.numerator/f2.denominator;
        }
        friend bool operator==(const Fraction& f1, const Fraction& f2) {
            return f1.numerator/f1.denominator == f2.numerator/f2.denominator;
        }
        friend bool operator<=(const Fraction& f1, const Fraction& f2){
            return f1.numerator/f1.denominator <= f2.numerator/f2.denominator;
        }
        friend bool operator>=(const Fraction& f1, const Fraction& f2){
            return f1.numerator/f1.denominator >= f2.numerator/f2.denominator;
        }
        
        friend bool operator!=(const Fraction& f1, const Fraction& f2) {
            return f1.numerator/f1.denominator != f2.numerator/f2.denominator;
        }

        // assignment operator
        void operator=(const Fraction& f){
            numerator = f.numerator;
            denominator = f.denominator;
            if (numerator != f.numerator || denominator != f.denominator) throw "Invalid data or logical error";
        }
};

#endif
