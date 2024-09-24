#include <iostream>
using namespace std;

void sumTillN(int i, int sum){
    if(i < 1){
        cout << "Sum is: " << sum << endl;
        return;
    }

    sum += i;
    sumTillN(i-1, sum);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    sumTillN(n, 0);
    return 0;
}