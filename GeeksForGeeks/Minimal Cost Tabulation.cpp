/*
class Solution {
  public:
    int minimizeCost(int k, vector<int>& arr) {
        vector<int> dp(arr.size(), -1);
        dp[0] = 0;

        for(int i=1; i<arr.size(); i++){
            int minEnergy = INT_MAX;

            for(int j=1; j<=k; j++){
                if(i-j >= 0){
                    int jump = dp[i-j] + abs(arr[i] - arr[i-j]);
                    minEnergy = min(minEnergy, jump);
                }
            }

            dp[i] = minEnergy;
        }

        return dp[arr.size()-1];
    }
};
*/