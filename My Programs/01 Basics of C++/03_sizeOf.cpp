#include <iostream>
using namespace std;

int main(){
    // We can use the sizeof() operator to find the size of a datatype or a variable. The sizeof() operator returns the size of the datatype or the variable in bytes. 

    int a = 10;
    float b = 10.5;
    char c = 'A';

    cout << "The size of int datatype is " << sizeof(a) << " bytes" << endl;
    cout << "The size of float datatype is " << sizeof(b) << " bytes" << endl;
    cout << "The size of char datatype is " << sizeof(c) << " bytes" << endl;
    return 0;
}

