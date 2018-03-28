//Done by Henok Seifu
#include <fstream>
#ifndef VECTOR
#define VECTOR
 
using namespace std;
 
class Vector{
    public:
        int size;
        int* arr;
        Vector();
        Vector(int a); 
        ~Vector();
        int operator [](int i) const;
        friend void operator << (ostream& out, const Vector& v){
            for(int i = 0;i < v.size;i++){
                out << v.arr[i];
            }
        }
        friend void operator >> (istream& in, Vector& v){
            in >> v.size;
            for(int i = 0;i < v.size;i++){
                in >> v.arr[i];
            }
        }
        Matrix operator * (const Matrix& m);
};
 
 
 
#endif