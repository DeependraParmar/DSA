#include <iostream>
using namespace std;

int main(){
    // Program to check whether the number entered by the user is odd or even.
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if (a % 2 == 0){
        cout << "a is even." << endl;
    }
    else{
        cout << "a is odd." << endl;
    }
    return 0;
}