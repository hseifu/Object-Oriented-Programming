//Done by Henok Seifu
#include <iostream>

using namespace std;


class Motor{
    //throw a string
    public:
        Motor() {
            throw "This motor is having problems";
        }
        ~Motor(){}
};

class Car {
    public:
        Car() {
            //try to construct a motor and see if there are throws from there
            try{
                Motor m;
            }
            //catch throw from motor instanciation
            catch(const char* str){
                //throw what is caught
                throw str;
            }
        }
        ~Car(){}
};


class Garage{
    public:
        Garage() {
            try{
                //check if there is a throw when instanciating car
                Car c;
            }
            catch(const char* s){
                //if there is a throw above throw an error
                    throw "The car in this garage has problems with the motor";
                }
            
        }
};




int main(){
    //check if there is a throw when instanciating a garage
    try{
        Garage G;
    }
    catch(const char* s){
        //print something if there is an error thrown when initializing a garage
        cerr << "Error from Garage " << s << endl;
    }
    return 0;
}