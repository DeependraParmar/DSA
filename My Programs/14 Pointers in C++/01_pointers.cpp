#include <iostream>
using namespace std;

int main(){
    int num = 10;
    cout << "Address of num is: " << &num << endl;   
    cout << "Value stored at num is: " << *(&num) << endl; 

    int *ptr = &num;
    cout << "Value stored by pointer is: " << ptr << endl;
    cout << "Value stored at address stored by pointer is: " << *ptr << endl;

    cout << endl << "Size of num is: " << sizeof(num) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;

    return 0;
}