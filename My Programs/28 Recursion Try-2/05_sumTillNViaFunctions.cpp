#include <iostream>
using namespace std;

int sumTillN(int n){
    if(n < 1)
        return 0;
    
    return n + sumTillN(n-1);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Sum of first " << n << " natural numbers is: " << sumTillN(n) << endl;   
    return 0;
}