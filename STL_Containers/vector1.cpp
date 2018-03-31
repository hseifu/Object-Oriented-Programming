//Done by Henok Seifu
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(){
    vector<string> wordlist;//initalize vector
    string temp;//string to be read

    while(1){
        cin >> temp;//read the word
        if(temp=="END"){//check if end
            break;
        }
        wordlist.push_back(temp);//insert to vector
    }

    vector<string>::iterator it;//initialize iterator
    //print with space
    for(it = wordlist.begin();it != wordlist.end();it++){
        cout << *it << " ";
    }
    cout << "\n";

    vector<string>::iterator it2;//initialize iterator
    it2 = wordlist.begin();
    //print with comma
    cout << *it2;//first print the first name
    it2++;//increase iterator
    for(;it2 != (wordlist.end());it2++){
        cout << ", " << *it2 ;
        //print with comma in the beginning
    }
    cout << endl;
    
    return 0;
}