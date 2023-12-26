#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;

    int *qtr = ptr;

    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of qtr: " << qtr << endl;
     
    return 0;
}