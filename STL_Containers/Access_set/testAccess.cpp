//Done by Henok Seifu
#include "Access.h"

int main(){
    //create instance
    Access A;

    //activate codes
    A.activate(1234);
    A.activate(9999);
    A.activate(9876);

    //constantly read code
    unsigned int access_code;
    while(1){
        cout << "Please enter the access code\n";
        cin >> access_code;

        //if found break
        if(A.isactive(access_code)){
            cout << "Activation Successful" << endl;
            break;
        }

        else{
            cout << "Activation Unsuccessful" << endl;
            cout << "Please try again " << endl;
        }
    }

    //deactivate read code
    A.deactivate(access_code);

    //deactivate the given code
    A.deactivate(9999);

    //activate the given code
    A.activate(1111);

    //repeatedly read until found
    while(1){
        cout << "Please enter the access code\n";
        cin >> access_code;
        if(A.isactive(access_code)){
            cout << "Activation Successful" << endl;
            break;
        }
        else{
            cout << "Activation Unsuccessful" << endl;
            cout << "Please try again " << endl;
        }
    }
    return 0;
}