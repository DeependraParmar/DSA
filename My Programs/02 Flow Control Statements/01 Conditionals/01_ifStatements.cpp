#include <iostream>
using namespace std;

int main(){
    // Tasks are done if the condition is true. If the condition is false, the tasks are skipped. The tasks are enclosed in curly braces.
    // The condition is enclosed in parentheses.

    // Program to check whether is number entered by the user is greater than 10 or not.
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if (a > 10){
        cout << "a is greater than 10." << endl;
    }
    cout << "This statement is always executed." << endl;
    return 0;
}