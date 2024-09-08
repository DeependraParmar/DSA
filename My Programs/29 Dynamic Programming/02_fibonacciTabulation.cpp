#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int>& dp){
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> dp(n+1, -1);
    dp[0] = 0, dp[1] = 1;
    
    cout << n << "th fibonacci number is: " << fib(n, dp) << endl;

    return 0;
}