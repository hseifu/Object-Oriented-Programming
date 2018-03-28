//Done by Henok Seifu
#include "Matrix.h"
using namespace std;
#include "Vector.h"
Matrix::Matrix(int row, int col){
    columns = col;
    rows = row;
    list = new int*[row];
    for(int i=0;i<row;i++){
        list[i] = new int[columns];
    }
}

Matrix::~Matrix(){
    for(int i = 0; i < columns;i++){
        delete[] list[i];
    }
    delete[] list;
}





Matrix Matrix::operator * (const Matrix& m){
    if(m.rows != 1){
        cout<<"invalid operation, row and column mismatch"<<endl;
    }
    else{
        Matrix res(this->size,m.columns);
        for(int i=0;i<this->size;i++){
            for(int j=0;j<m.columns;j++){
                res.list[i][j] = this->arr[i]*m.list[0][j];
            }
        }
        return res;
    }
    return m;
}


