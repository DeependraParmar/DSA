#include <iostream>
using namespace std;

int main(){
    // Variables are like the containers to store different types of data according to the datatype while the Datatype is something which tells the compiler about how much memory to allocate to the variable and what type of data it can store. 

    // There are 4 types of datatypes in C++:
    // 1. Primitive Datatypes
    // 2. Derived Datatypes
    // 3. User-defined Datatypes
    // 4. Abstract Datatypes

    // Primitive Datatypes are the basic datatypes which are already defined in the C++ language. They are further divided into 3 types:
    // 1. Integer Datatype
    // 2. Floating-point Datatype
    // 3. Character Datatype

    // Derived Datatypes are the datatypes which are derived from the primitive datatypes. They are further divided into 3 types:
    // 1. Array Datatype
    // 2. Function Datatype
    // 3. Pointer Datatype

    // User-defined Datatypes are the datatypes which are defined by the user. They are further divided into 2 types:
    // 1. Structure Datatype
    // 2. Union Datatype

    int a = 10; // Integer Datatype: here, int is the datatype telling the compiler that the variable 'a' is of type integer and it can store integer values only. The size of the integer datatype is 4 bytes (32 bits).

    float b = 10.5; // Floating-point Datatype: here, float is the datatype telling the compiler that the variable 'b' is of type floating-point and it can store floating-point values only. The size of the floating-point datatype is 4 bytes (32 bits).

    char c = 'A'; // Character Datatype: here, char is the datatype telling the compiler that the variable 'c' is of type character and it can store character values only. The size of the character datatype is 1 byte (8 bits).

    // The size of the datatypes may vary from compiler to compiler. The above sizes are for the GCC compiler.

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;



    return 0;
}