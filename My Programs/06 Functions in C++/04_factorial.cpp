#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;

    if(n<0){
        cout << "Can't find factorial of Negative Number" << endl;
    }
    else if(factorial(n) > INT32_MAX || factorial(n) == 0){
        cout << "OUT OF RANGE ERROR: Answer can't be represented in INT32" << endl;
    }
    else{
        cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    }
    return 0;
}