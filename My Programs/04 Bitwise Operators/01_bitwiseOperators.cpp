#include <iostream>
using namespace std;

int main(){
    // Bitwise Operators are the operators that perform the operations bit-by-bit. 

    int a = 2;
    int b = 4;

    cout << "a & b is: " << (a & b) << endl;   
    cout << "a | b is: " << (a | b) << endl;   
    cout << "~a is: " << ~a << endl;   
    cout << "a ^ b is: " << (a ^ b) << endl;   
    cout << "a << 30 is: " << (a << 30) << endl;
    cout << "a >> 1 is: " << (a >> 1) << endl;
    return 0;
}