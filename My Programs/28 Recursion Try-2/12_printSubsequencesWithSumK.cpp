#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << " ";
    
    cout << endl;
}

void allSubsequencesWithSumK(int i, vector<int>& arr, vector<int>& ans, int sum, int k){
    if(i == arr.size()){
        if(sum == k)
            printArray(ans);
        
        return;
    }

    // considering element at i and calculating the sum: TAKE
    sum += arr[i];
    ans.push_back(arr[i]);
    allSubsequencesWithSumK(i+1, arr, ans, sum, k);

    // removing the last element: NOT TAKE
    ans.pop_back();
    sum -= arr[i];
    allSubsequencesWithSumK(i+1, arr, ans, sum, k);
}
int main(){
    vector<int> arr = {1, 2, 1};
    vector<int> ans;
    int k = 2;
    cout << "All subsequences with sum = " << k << " is/are: " << endl;
    allSubsequencesWithSumK(0, arr, ans, 0, k);

    return 0;
}