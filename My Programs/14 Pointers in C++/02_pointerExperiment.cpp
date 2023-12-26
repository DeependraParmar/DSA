#include <iostream>
using namespace std;

int main(){
    // int *p = 0; // pointer is created but pointing to an anonymous address;
    // cout << *p << endl; // Segmentation fault due to nothing at the address.

    int i=5;
    int *ptr = &i;

    (*ptr)++;

    cout << "Value at address stored by pointer is: " << (*ptr) << endl;

    return 0;
}