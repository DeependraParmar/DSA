#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << " ";
    
    cout << endl;
}

bool allSubsequencesWithSumK(int i, vector<int>& arr, vector<int>& ans, int sum, int k){
    if(i == arr.size()){
        // condition satisfied
        if(sum == k){
            printArray(ans);
            return true;
        }
        // condition not satisfied
        return false;
    }

    // considering element at i and calculating the sum: TAKE
    sum += arr[i];
    ans.push_back(arr[i]);

    if(allSubsequencesWithSumK(i+1, arr, ans, sum, k) == true)
        return true;

    // removing the last element: NOT TAKE
    ans.pop_back();
    sum -= arr[i];

    if(allSubsequencesWithSumK(i+1, arr, ans, sum, k) == true)
        return true;
    
    return false;
}
int main(){
    vector<int> arr = {1, 2, 1};
    vector<int> ans;
    int k = 2;
    cout << "Any subsequences with sum = " << k << " is: " << endl;
    allSubsequencesWithSumK(0, arr, ans, 0, k);

    return 0;
}