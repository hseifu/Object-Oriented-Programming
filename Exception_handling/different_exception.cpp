//Done by Henok Seifu
class OwnException : public exception {
    public:
    //error string 
        string str;
        //parameter constructor
        OwnException(string passedstr) {str = passedstr;}
        //destructor 
        ~OwnException() throw() {};
        //overwrite the what method
        const char* what() const throw() {return "OwnException\n";}

};

void thrower(int p){
    //switch by cases according to given parameter
    switch(p){
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
            break;
        default:
        //in the default case create an "OwnException" instance with given string
            throw OwnException("Default case exception");
    }
}

int main(){
    //throws char
    try{
        thrower(1);
    }
    catch(char c){
        cerr << "Caught in main: " << c << endl;
    }
    //throws integer
    try{
        thrower(2);
    }
    catch(int c){
        cerr << "Caught in main: " << c << endl;
    }
    //throws bool
    try{
        thrower(3);
    }
    catch(bool c){
        cerr << "Caught in main: " << c << endl;
    }
    //throws "OwnException" object
    try{
        thrower(4);
    }
    //print the message in the what
    catch(OwnException c){
        cerr << "Caught in main: " << c.what() << endl;
    }
    return 0;
}