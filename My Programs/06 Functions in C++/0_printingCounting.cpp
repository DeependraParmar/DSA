#include <iostream>
using namespace std;

void printCounting(int n){
    for(int i=1; i<=n ; i++){
        cout << i << " ";
    }
    return;
}
int main(){
    int n;
    cout << "Enter the value of n to print counting till: ";
    cin >> n;

    printCounting(n);
    return 0;
}