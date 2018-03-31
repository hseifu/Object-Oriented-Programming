//Done by Henok Seifu
#include "Access.h"

void Access::activate(unsigned int code){
    //add the passed value into the set with the appropriate method
    passcodes.insert(code);
}

void Access::deactivate(unsigned int code){
    //iterator to search for the input code
    set<unsigned int>::iterator it = passcodes.begin();

    //checking flag if input is in the database
    bool isnotincodes = true;

    //iterate through entire set
    while(it != passcodes.end()){
        if(*it == code){
            //if found activate flag and break
            isnotincodes = false;
            break;
        }
        it++;
    }

    //if not found print message and exit function
    if(isnotincodes){
        cout << "Code was not found in database" << endl;
        return;
    }

    //if found erase
    passcodes.erase(it);
}

bool Access::isactive(unsigned int code) const {
    cout << "Checking database " << endl;

    //flag to check if found
    bool activation_successful = false;

    //iterator for searching the code 
    set<unsigned int>::iterator it = passcodes.begin();

    //iterate through entire set
    while(it != passcodes.end()){
        if(*it == code){
            //if found activate flag and break
            activation_successful = true;
            break;
        }
        it++;
    }
    
    //return true if found and false if not found
    return activation_successful;
}