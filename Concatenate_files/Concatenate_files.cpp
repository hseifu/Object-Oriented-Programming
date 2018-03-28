#include <iostream>
#include <fstream>
#define TXT_SIZE 10
using namespace std;
 
 
int main(){
    int n;
    cin >> n;//read number of files
 
    ofstream output ("concatn.txt",ios::out | ios::binary | ios::app);//open and check if open
    if(!output.good()){
        cerr << "Error opening output file " << endl;
        exit(1);
    }
 
    for(int i=0;i<n;i++){
        string name;
        cin >> name;//read name of file 
        ifstream input (name,ios::in | ios::binary);//open and check if properly opened
        if(!input.good()){
            cerr << "Error opening input file " << endl;
            exit(1);
        }
        char nl = '\n';
        char temp[TXT_SIZE]; 
        input.read(temp,TXT_SIZE);//binary read the text
        output.write(temp,TXT_SIZE);//binary write the text
        output.write(&nl,1);//new line
    }
    return 0;
}