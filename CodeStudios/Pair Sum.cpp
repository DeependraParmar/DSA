/*
#include <bits/stdc++.h>
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    int n = arr.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==s){
                ans.push_back({arr[i],arr[j]});
            }
        }
    }
    return ans;
}
*/