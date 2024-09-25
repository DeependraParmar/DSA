/*
class Solution {
  public:
    void solve(int index, vector<int>& arr, vector<int>& ans, int sum){
        if(index == arr.size()){
            ans.push_back(sum);
            return;
        }

        // considering the element in sum : TAKE
        solve(index+1, arr, ans, sum+arr[index]);

        // not considering element in sum: NOT TAKE
        solve(index+1, arr, ans, sum);
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        solve(0, arr, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
*/