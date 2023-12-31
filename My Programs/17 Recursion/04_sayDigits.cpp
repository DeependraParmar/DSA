#include <iostream>
using namespace std;
void sayDigits(int n){
    string digitArr[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(n==0)
        return;
    
    int digit = n%10;
    n/=10;
    sayDigits(n);

    cout << digitArr[digit] << " ";
}
int main(){
    int n;
    cout << "Enter the Number to say digits: ";
    cin >> n;

    sayDigits(n);
    return 0;
}