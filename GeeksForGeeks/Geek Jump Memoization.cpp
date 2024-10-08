/*
class Solution {
  public:
    int min(int l, int r){
        return l < r ? l : r;
    }

    int solve(int i, vector<int>& arr, vector<int>& dp){
        if(i == 0)
            return 0;

        if(dp[i] != -1)
            return dp[i];

        int right = INT_MAX;

        int left = solve(i-1, arr, dp) + abs(arr[i] - arr[i-1]);
        if(i > 1)
            right = solve(i-2, arr, dp) + abs(arr[i] - arr[i-2]);

        return dp[i] = min(left, right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n+1, -1);

        return solve(n-1, height, dp);
    }
};
*/