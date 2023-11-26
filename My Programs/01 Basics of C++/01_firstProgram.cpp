#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!" << endl;
    return 0;
}

// Here, 
// #include <iostream> is a preprocessor directive which tells the compiler to include the iostream header file in the program. The iostream header file contains the definitions of the input and output stream objects and functions.

// using namespace std; tells the compiler that we are using the standard namespace. The standard namespace contains the definitions of the standard library.

// int main() is the main function of the program. The execution of the program starts from the main function.

// cout is an object of the ostream class. It is used to display the output to the standard output device (usually the console).

// << is the insertion operator which is used to insert the data into the object.

// "Hello World!" is the data which is to be inserted into the cout object.

// endl is a manipulator which is used to insert a new line and flushes the stream. It is equivalent to '\n'.

// return 0; terminates the main function and returns the value 0 to the calling process (usually the operating system).

// The main function is of type int, so it returns an integer value. The return value of the main function is used by the operating system to know whether the program executed successfully or not. If the main function returns 0, then the program executed successfully. If the main function returns a non-zero value, then the program did not execute successfully.

// The main function can also be of type void. In that case, it does not return any value.

// The main function can also take parameters. The parameters argc and argv are used to get the command-line arguments passed to the program. argc is the count of the command-line arguments and argv is an array of strings containing the command-line arguments.