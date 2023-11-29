#include <iostream>
using namespace std;
int nthFibonacciTerm(int n){
    int a = 0;
    int b = 1;
    
    if(n==1){
        return a;
    }
    if(n==2){
        return b;
    }
    
    int ans = 0;
    for(int i=3; i<=n; i++){
        ans = a+b;
        a = b;
        b = ans;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout <<n << "th term of Fibonacci is: " << nthFibonacciTerm(n) << endl;
    return 0;
}