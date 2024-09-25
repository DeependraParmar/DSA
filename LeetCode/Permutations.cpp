/*
class Solution {
public:
    void solve(vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans, unordered_map<int, bool>& mapping){
        if(ds.size() == arr.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=0; i<arr.size(); i++){
            if(!mapping[i]){
                mapping[i] = true;
                ds.push_back(arr[i]);
                solve(arr, ds, ans, mapping);
                ds.pop_back();
                mapping[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        unordered_map<int,bool> mapping;

        solve(nums, ds, ans, mapping);

        return ans;
    }
};
*/