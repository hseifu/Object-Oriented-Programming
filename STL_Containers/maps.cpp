//Done by Henok Seifu
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, string> Data;//create map data structure
    ifstream ifs("data.txt",ifstream::in);//open and check file
    if(!ifs.good()){
        cout << "Error opening file" << endl;
        return -1;
    }
    string fname;
    string lname;
    string bday;
    string name;
    while(ifs.good()){
        //read strings separatedly

        ifs >> fname;

        ifs >> lname;
        
        ifs >> bday;

        name = fname + " " +lname;//concatenate strings

        Data[name] = bday;//assign keys and values

    }

    //input name of person to search for birthday
    char namesearch[256];
    cout << "Enter name to search for birthday " << endl;
    cin.getline(namesearch,256);
    namesearch[sizeof(namesearch)/sizeof(char)-1] = '\0';

    bool found = false;
    //iterator to iterate through every value and check
    map<string, string>::iterator it;
    for(it = Data.begin(); it != Data.end(); it++){
        if(it->first == namesearch){
            found = true;
            cout << namesearch << " has a birthday on " << Data[namesearch] << endl;
        }
    }

    if(!found){
        cout << "Name not found!" << endl;
    }

    ifs.close();
    return 0;
}
