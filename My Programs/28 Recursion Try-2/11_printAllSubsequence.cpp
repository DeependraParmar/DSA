#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr){
    cout << "{";
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << ",";
    cout << "}" << endl;
}

void printAllSubsequences(int i, vector<int> &arr, vector<int> &ans){
    if(i >= arr.size()){
        printArray(ans);
        return;
    }

    // considering the element at index i: TAKE
    ans.push_back(arr[i]);
    printAllSubsequences(i+1, arr, ans);

    // not considering the element at index i: NOT TAKE
    ans.pop_back();
    printAllSubsequences(i+1, arr, ans);
}
int main(){
    vector<int> arr = { 3, 1, 2 };
    vector<int> ans;

    printAllSubsequences(0, arr, ans);


    return 0;
}