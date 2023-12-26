#include <iostream>
using namespace std;

int main(){
    int num = 10;
    cout << "Address of num is: " << &num << endl;   
    cout << "Value stored at num is: " << *(&num) << endl; 

    return 0;
}