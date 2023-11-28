#include <iostream>
using namespace std;

int main(){
    // Creating a calculator using switch case statements 
    int a, b;
    char op;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operator: ";
    cin >> op;

    switch(op){
        case '+':
            cout << "Result of a+b is: " << a+b << endl;
            break;
        case '-':
            cout << "Result of a-b is: " << a-b << endl;
            break;
        case '*':
            cout << "Result of a*b is: " << a*b << endl;
            break;
        case '/':
            cout << "Result of a/b is: " << a/b << endl;
            break;
        case '%':
            cout << "Result of a%b is: " << a%b << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
    }   
    return 0;
}