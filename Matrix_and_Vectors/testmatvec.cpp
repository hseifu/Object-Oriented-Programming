//Done by Henok Seifu
#include "Matrix.h"
#include "Vector.h"
using namespace std;

int main(){
    Matrix a;
    Vector o;
    cin >> a;
    cout << a;
    cin >> o;
    cout << o;
    istream mi("matrixentry.txt");
    if(!mi.good()){
        cerr << "Error opening output file" << endl;
		exit(3);
    }
    istream vi("vectorentry.txt");
    if(!vi.good()){
        cerr << "Error opening output file" << endl;
		exit(3);
    }
    ostream output("outpur.txt");
    if(!output.good()){
        cerr << "Error opening output file" << endl;
		exit(3);
    }
    return 0;
}