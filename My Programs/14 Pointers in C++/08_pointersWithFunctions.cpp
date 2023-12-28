#include <iostream>
using namespace std;

void update(int *ptr){
    ptr = ptr + 1;
    cout << "ptr in the update(): " << ptr << endl;
}
int main(){
    int array[5] = {0};
    int *ptr = array;

    cout << "ptr in the main(): " << ptr << endl; // gives 0x61fef8
    update(ptr);   // gives 0x61fefc
    cout << "ptr back in the main(): " << ptr << endl; // gives 0x61fef8

    // Conclusion: which means that pointer is not updated as it is call by value. A new pointer is created in the update().


    return 0;
}