#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to calculate sum till: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    cout << "Sum of N Numbers is: " << sum << endl;
    return 0;
}