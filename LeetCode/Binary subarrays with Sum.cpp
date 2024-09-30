/*
class Solution {
public:
    int solve(vector<int>& nums, int goal){
        if(goal < 0)
            return 0;

        int left = 0, right = 0, sum = 0, count = 0;
        int n = nums.size();

        while(right < n){
            sum += nums[right];

            while(sum > goal){
                sum -= nums[left];
                left++;
            }

            if(sum <= goal)
                count = count + (right-left+1);

            right++;
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums, goal) - solve(nums, goal-1);
    }
};
*/