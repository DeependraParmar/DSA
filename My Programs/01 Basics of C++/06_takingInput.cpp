#include <iostream>
using namespace std;

int main(){
    // We can use the cin object to take input from the user. The cin object is an object of the istream class. It is used to take input from the standard input device (usually the keyboard).

    // >> is the extraction operator which is used to extract the data from the object.

    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Value entered from the keyboard is: " << a << endl;
    return 0;
}