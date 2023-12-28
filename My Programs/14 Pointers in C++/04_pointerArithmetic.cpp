#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *ptr = &num;

    cout << "ptr before: " << ptr << endl;
    ptr = ptr + 1;
    cout << "ptr after: " << ptr << endl;


    return 0;
}