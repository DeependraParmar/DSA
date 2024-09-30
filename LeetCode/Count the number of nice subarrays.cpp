/*
class Solution {
public:
    int solve(vector<int>& nums, int k){
        int left = 0, right = 0, odds = 0, count = 0;
        int n = nums.size();

        while(right < n){
            if(nums[right] & 1)
                odds++;

            while(odds > k){
                if(nums[left] & 1)
                    odds--;

                left++;
            }

            if(odds <= k)
                count += (right-left+1);

            right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k-1);
    }
};
*/