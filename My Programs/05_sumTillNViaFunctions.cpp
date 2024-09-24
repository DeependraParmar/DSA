#include <iostream>
using namespace std;

int sumTillN(int n, int sum){
    if(n < 1)
        return sum;
    
    sum += n;
    sumTillN(n-1, sum);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Sum of first " << n << " natural numbers is: " << sumTillN(n, 0) << endl;   
    return 0;
}