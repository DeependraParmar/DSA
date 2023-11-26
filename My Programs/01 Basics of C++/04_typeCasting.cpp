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



    // Quiz: If we try to typecast an integer into a character with the size greater than that of the character's range, then what will be the output 
    int integer = 193902;
    char character = integer;

    cout << "Character contains: " << character << endl;

    // Ans: The output will be the character corresponding to the ASCII value of the last 8 binary bits of the binary of the integer of the 32 bits. For example, if the integer is 193902, then the binary of the integer is 101111011000101110, so the last 8 bits are 000101110, which is 46 in decimal and the character corresponding to 46 in ASCII is '.' (dot). So, the output will be '.' (dot). Sometimes, you can get warning doing this and sometimes not. It depends on the compiler. But, it is not recommended to do this. It is better to use explicit type casting in this case.

    return 0;
}