#include <iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i=2; i<=n; i++){
        ans*=i;
    }
    return ans;
}
int nCr(int n,int r){
    return (factorial(n))/(factorial(r) * factorial(n-r));
}


int main(){
    int n,r;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    cout << "nCr of " << n << " and " << r << " is: " << nCr(n,r) << endl;
    return 0;
}