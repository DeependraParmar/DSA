/*
class Solution {
public:
    void solve(int i, vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans){
        if(i == arr.size()){
            ans.push_back(ds);
            return;
        }

        // TAKE
        ds.push_back(arr[i]);
        solve(i+1, arr, ds, ans);
        ds.pop_back();

        // NOT TAKE
        solve(i+1, arr, ds, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, nums, ds, ans);
        return ans;
    }
};
*/