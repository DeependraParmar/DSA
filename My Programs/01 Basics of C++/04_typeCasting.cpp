#include <iostream>
using namespace std;

int main(){
    // Type Casting is the process of converting one datatype into another datatype. There are 2 types of Type Casting:
    // 1. Implicit Type Casting
    // 2. Explicit Type Casting

    // Implicit Type Casting is the process of converting a datatype into another datatype automatically by the compiler. It is also known as Automatic Type Conversion. It is done when the destination datatype is larger than the source datatype. For example, converting an integer into a float.
    float a = 10.274;
    int b = a; // Implicit Type Casting: here, the integer value stored in the variable 'a' is converted into a float value and stored in the variable 'b' automatically by the compiler.
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    // ______________________________________________________________________________________________________________________________________________________________________________________

    // Explicit Type Casting is the process of converting a datatype into another datatype manually by the programmer. It is also known as Type Conversion. It is done when the destination datatype is smaller than the source datatype. For example, converting a float into an integer.
    float c = 10.274;
    int d = (int)c; // Explicit Type Casting: here, the float value stored in the variable 'c' is converted into an integer value and stored in the variable 'd' manually by the programmer.
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;

    return 0;
}