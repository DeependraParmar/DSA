#include <iostream>
using namespace std;
int returnSum(int a, int b){
    return a+b;
}
int returnSum(int a, int b, int c){
    return a + b + c;
}

int main(){
    cout << returnSum(10,20) << endl;
    cout << returnSum(10,20,30) << endl;
    return 0;
}