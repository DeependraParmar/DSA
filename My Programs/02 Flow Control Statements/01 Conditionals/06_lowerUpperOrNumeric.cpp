#include <iostream>
using namespace std;

int main(){
    // Program to check whether the character entered by the user is lowercase, uppercase or numeric.
    char ch;
    cout << "Enter the character here: ";
    cin >> ch;

    if(ch >= 65 and ch <= 90){
        cout << "Character is Uppercase" << endl;
    }
    else if(ch >= 97 and ch <= 122){
        cout << "Character is Lowercase" << endl;
    }
    else if(ch >= 48 and ch <= 57){
        cout << "Character is Number" << endl;
    }
    else{
        cout << "Neither Uppercase, Lowercase nor Number" << endl;
    }
    return 0;
}