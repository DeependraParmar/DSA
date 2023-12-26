#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }

    return a;
}
int main(){
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "GCD/HCF of " << a << " and " << b << " is: " << gcd(a,b) << endl;
   
    return 0;
}