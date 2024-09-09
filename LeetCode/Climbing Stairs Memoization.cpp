/*
class Solution {
public:
    int solve(int index, vector<int>& dp){
        if(index == 0 || index == 1)
            return 1;

        if(dp[index] != -1)
            return dp[index];

        dp[index-1] = solve(index-1, dp);
        dp[index-2] = solve(index-2, dp);

        return dp[index-1] + dp[index-2];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);

        return solve(n, dp);
    }
};
*/