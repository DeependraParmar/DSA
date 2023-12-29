#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int *ptr = &n;
    int **dptr = &ptr;
    
    cout << "ptr stores: " << ptr << endl;
    cout << "*dptr gives: " << *dptr << endl;
    cout << "address of ptr is: " << &ptr << endl;
    cout << "dptr stores: " << dptr << endl;

    return 0;
}