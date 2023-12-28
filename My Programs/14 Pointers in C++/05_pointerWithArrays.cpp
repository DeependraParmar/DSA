#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};

    cout << "Base Address of Array arr is: " << arr << endl;
    cout << "Base Address of Array arr is: " << &arr[0] << endl;

    //incrementing the value at arr[0];
    *(arr) = *(arr) + 1;
    cout << "Value at BA is: " << *arr << endl;

    // un-assignable operation of updating the base address in the symbol table.
    // arr = arr + 1; ---> Error

    int *ptr = arr;
    ptr = ptr + 1;

    cout << "After increment, Pointer stores: " << ptr << endl;

    return 0;
}