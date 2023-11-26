#include <iostream>
using namespace std;

int main(){
    // If else Statements are used to execute a block of code if the condition is true. If the condition is false, the else block is executed. The else block is optional.
    // The else block is executed if the condition is false.
    // The else block is also enclosed in curly braces.
    // The if and else blocks can contain any number of statements.

    // Program to check whether is number entered by the user is greater than 10 or not.
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if (a > 10){
        cout << "a is greater than 10." << endl;
    }
    else{
        cout << "a is not greater than 10." << endl;
    }
    return 0;
}