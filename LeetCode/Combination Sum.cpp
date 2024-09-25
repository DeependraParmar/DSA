/*
class Solution {
private:
    void solve(int i, vector<vector<int>> &ans, vector<int>& arr, vector<int>& ds, int target){
        if(i == arr.size()){
            if(target == 0)
                ans.push_back(ds);
            return;
        }

        if(arr[i] <= target){
            ds.push_back(arr[i]);
            solve(i, ans, arr, ds, target-arr[i]);
            ds.pop_back();
        }
        solve(i+1, ans, arr, ds, target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, ans, candidates, ds, target);
        return ans;
    }
};
*/