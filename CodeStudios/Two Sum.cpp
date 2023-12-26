/*
#include <vector>
#include <algorithm>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    vector<pair<int,int>> ans;
    sort(arr.begin(),arr.end());

    int start = 0;
    int end = arr.size() -1;

    while(start<end){
        if(arr[start] + arr[end] == target){
            ans.push_back({arr[start++],arr[end--]});
        }
        else if(arr[start] + arr[end] < target){
            start++;
        }
        else{
            end--;
        }
    }

    if(ans.empty()){
        ans.push_back({-1,-1});
    }

    return ans;
}

*/