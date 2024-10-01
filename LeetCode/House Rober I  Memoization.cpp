/*
class Solution {
public:
    int solve(int index, vector<int>& arr, vector<int>& dp){
        if(index == 0)
            return arr[index];

        if(index < 0)
            return 0;

        if(dp[index] != -1)
            return dp[index];

        int pick = solve(index-2, arr, dp) + arr[index];
        int nonPick = solve(index-1, arr, dp);

        return dp[index] = max(pick, nonPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);

        return solve(n-1, nums, dp);
    }
};
*/