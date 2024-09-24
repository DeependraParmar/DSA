#include <iostream>
using namespace std;

void printFromNTo1(int n){
    if(n==0)
        return;

    cout << n << " ";
    printFromNTo1(n - 1);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printFromNTo1(n);
    return 0;
}