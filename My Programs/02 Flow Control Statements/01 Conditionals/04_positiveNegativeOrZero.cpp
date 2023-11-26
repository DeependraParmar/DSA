#include <iostream>
using namespace std;

int main(){
    // Program to check whether the number entered by the user is positive, negative or zero.
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if (a > 0){
        cout << "a is positive." << endl;
    }
    else if (a < 0){
        cout << "a is negative." << endl;
    }
    else{
        cout << "a is zero." << endl;
    }
    return 0;
}