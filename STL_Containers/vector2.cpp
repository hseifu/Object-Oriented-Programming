//Done by Henok Seifu
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> wordlist;//initalize vector
    string temp;//string to be read

    while(1){
        getline(cin,temp);;//read the sentence
        if(temp=="END"){//check if end
            break;
        }
        wordlist.push_back(temp);//insert to vector
    }

    //check if 2nd and fifth exist
    if(wordlist.size()>=5){
        //swap
        string temp2 = wordlist[1];
        wordlist[1] = wordlist[4];
        wordlist[4] = temp2;  
    }
    else{//print message
        cout << "The size is not long enough to exchange the elements\n";
    }
    //change last value
    wordlist[wordlist.size()-1] = "???";

    vector<string>::iterator it2;//initialize iterator
    //print with comma
    for(it2 = wordlist.begin();it2 != (wordlist.end()-1);it2++){
        cout << *it2 <<", ";
    }
    cout << *it2 << endl;

    //print with semicolon
    vector<string>::iterator it3;//initialize iterator
    for(it3 = wordlist.begin();it3 != (wordlist.end()-1);it3++){
        cout << *it3  << "; " ;
    }
    cout << *it3 <<endl;

    //print in reverse with space
    vector<string>::iterator it;//initialize iterator
    //start from last to first
    for(it = wordlist.end();it != wordlist.begin();it--){
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}