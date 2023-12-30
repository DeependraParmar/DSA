#include <iostream>
using namespace std;

int main(){
    int *i = new int;

    cout << "Enter the value of i: ";
    cin >> *i;
    cout << "i is: " << *i << endl;

    cout << "size of i is: " << sizeof(i) << endl;


    free(i);
    return 0;
}