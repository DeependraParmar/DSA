/*
class Solution {
  public:
    int min(int l, int r){
        return l < r ? l : r;
    }
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n, 0);
        dp[0] = 0;

        for(int i=1; i<n; i++){
            int first = dp[i-1] + abs(height[i] - height[i-1]);
            int second = INT_MAX;
            if(i>1)
                second = dp[i-2] + abs(height[i] - height[i-2]);

            dp[i] = min(first,second);
        }

        return dp[n-1];
    }
};
*/