//Done by Henok Seifu
#include <fstream>
#include <iostream>
#ifndef MATRIX
#define MATRIX
using namespace std;

class Matrix{
    public:
        int columns;
        int rows;
        int **list;
        Matrix();
        Matrix(int row, int col);
        ~Matrix();
        friend void operator << (ostream& os, const Matrix& m){
            for(int i = 0;i < m.rows;i++){
                for(int j=0;j < m.columns;j++){
                    os << m.list[i][j];
                }
                os << '\n';
            }
        }
        friend void operator >> (istream& is, Matrix& m){
            is >> m.rows;
            is >> m.columns;
            for(int i = 0;i < m.rows;i++){
                for(int j=0;j < m.columns;j++){
                    is >> m.list[i][j];
                }
            }
        }
        

};

#endif