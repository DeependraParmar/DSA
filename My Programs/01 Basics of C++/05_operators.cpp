#include <iostream>
using namespace std;

int main(){
    // Operators are the symbols which are used to perform different operations on the operands. The operands are the variables or the values on which the operations are performed. For example, in the expression 5 + 10, 5 and 10 are the operands and + is the operator which is used to perform the addition operation on the operands 5 and 10.
    // There are 6 types of operators in C++:
    // 1. Arithmetic Operators: Arithmetic operators are used to perform arithmetic operations on the operands. For example, +, -, *, /, %, etc.
    // 2. Relational Operators: Relational operators are used to compare the operands. For example, ==, !=, >, <, >=, <=, etc.
    // 3. Logical Operators: Logical operators are used to perform logical operations on the operands. For example, &&, ||, !, etc.
    // 4. Bitwise Operators: Bitwise operators are used to perform bitwise operations on the operands. For example, &, |, ^, ~, <<, >>, etc.
    // 5. Assignment Operators: Assignment operators are used to assign the values to the variables. For example, =, +=, -=, *=, /=, %=, etc.
    // 6. Miscellaneous Operators: Miscellaneous operators are used to perform miscellaneous operations on the operands. For example, sizeof(), ?:, ., ->, etc.

    // Arithmetic Operators
    int a = 10, b = 5;
    cout << endl << "Arithemetic Operators:" << endl;
    cout << "The value of a + b is " << a + b << endl; // Addition Operator
    cout << "The value of a - b is " << a - b << endl; // Subtraction Operator
    cout << "The value of a * b is " << a * b << endl; // Multiplication Operator
    cout << "The value of a / b is " << a / b << endl; // Division Operator
    cout << "The value of a % b is " << a % b << endl; // Modulus Operator
    cout << "The value of a++ is " << a++ << endl; // Post-increment Operator
    cout << "The value of a-- is " << a-- << endl; // Post-decrement Operator
    cout << "The value of ++a is " << ++a << endl; // Pre-increment Operator
    cout << "The value of --a is " << --a << endl; // Pre-decrement Operator

    // Relational Operators
    cout << endl << "Relational Operators:" << endl;
    cout << "The value of a == b is " << (a == b) << endl; // Equal to Operator
    cout << "The value of a != b is " << (a != b) << endl; // Not Equal to Operator
    cout << "The value of a > b is " << (a > b) << endl; // Greater than Operator
    cout << "The value of a < b is " << (a < b) << endl; // Less than Operator
    cout << "The value of a >= b is " << (a >= b) << endl; // Greater than or Equal to Operator
    cout << "The value of a <= b is " << (a <= b) << endl; // Less than or Equal to Operator

    // Logical Operators
    cout << endl << "Logical Operators:" << endl;
    cout << "The value of ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << endl; // Logical AND Operator
    cout << "The value of ((a == b) || (a < b)) is " << ((a == b) || (a < b)) << endl; // Logical OR Operator
    cout << "The value of !(a == b) is " << !(a == b) << endl; // Logical NOT Operator

    // Bitwise Operators
    cout << endl << "Bitwise Operators:" << endl;
    cout << "The value of (a & b) is " << (a & b) << endl; // Bitwise AND Operator
    cout << "The value of (a | b) is " << (a | b) << endl; // Bitwise OR Operator
    cout << "The value of (a ^ b) is " << (a ^ b) << endl; // Bitwise XOR Operator
    cout << "The value of (~a) is " << (~a) << endl; // Bitwise NOT Operator
    cout << "The value of (a << 2) is " << (a << 2) << endl; // Left Shift Operator
    cout << "The value of (a >> 2) is " << (a >> 2) << endl; // Right Shift Operator

    // Assignment Operators
    int c = 10;
    cout << "The value of c is " << c << endl; // Assignment Operator
    cout << "The value of c += 2 is " << (c += 2) << endl; // Addition Assignment Operator
    cout << "The value of c -= 2 is " << (c -= 2) << endl; // Subtraction Assignment Operator
    cout << "The value of c *= 2 is " << (c *= 2) << endl; // Multiplication Assignment Operator
    cout << "The value of c /= 2 is " << (c /= 2) << endl; // Division Assignment Operator
    cout << "The value of c %= 2 is " << (c %= 2) << endl; // Modulus Assignment Operator
    cout << "The value of c &= 2 is " << (c &= 2) << endl; // Bitwise AND Assignment Operator
    cout << "The value of c |= 2 is " << (c |= 2) << endl; // Bitwise OR Assignment Operator
    cout << "The value of c ^= 2 is " << (c ^= 2) << endl; // Bitwise XOR Assignment Operator
    cout << "The value of c <<= 2 is " << (c <<= 2) << endl; // Left Shift Assignment Operator
    cout << "The value of c >>= 2 is " << (c >>= 2) << endl; // Right Shift Assignment Operator
    
    // Miscellaneous Operators
    cout << endl << "Miscellaneous Operators:" << endl;
    cout << "The size of variable a is " << sizeof(a) << endl; // sizeof() Operator
    cout << "The value of variable a is " << a << endl; // Ternary Operator
    cout << "The address of variable a is " << &a << endl; // Address of Operator
    cout << "The value of variable a is " << *(&a) << endl; // Dereference Operator

    return 0;
}