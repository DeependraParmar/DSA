#include <iostream>
#include <vector>
using namespace std;

int countSubsequenceWithSumK(int i, vector<int> &arr, int sum, int k)
{
    if(i == arr.size()){
        // condition satisfied
        if(sum == k)
            return 1;

        // condition not satisfied
        return 0;
    }

    // considering element at i and calculating the sum: TAKE
    sum += arr[i];
    int l = countSubsequenceWithSumK(i + 1, arr, sum, k);

    // removing the last element: NOT TAKE
    sum -= arr[i];
    int r = countSubsequenceWithSumK(i + 1, arr, sum, k);

    return l+r;
}
int main(){
    vector<int> arr = {1, 2, 1};
    int k = 2;
    cout << "Count of subsequences with sum = " << k << " is: " << countSubsequenceWithSumK(0, arr, 0, k)<< endl;

    return 0;
}