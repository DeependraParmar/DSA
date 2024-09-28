/*
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int left = 0, right = 0;
        int n = nums.size();
        int zeroes = 0;

        while(right < n){
            if(nums[right] == 0)
                zeroes++;

            if(zeroes > k){
                if(nums[left] == 0)
                    zeroes--;

                left++;
            }

            if(zeroes <= k)
                ans = max(ans, right-left+1);

            right++;
        }

        return ans;
    }
};
*/