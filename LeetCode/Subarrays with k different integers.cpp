/*
class Solution {
public:
    int solve(vector<int>& nums, int k){
        int left = 0, right = 0, count = 0;
        unordered_map<int,int> map;

        while(right < nums.size()){
            map[nums[right]]++;

            while(map.size() > k){
                map[nums[left]]--;

                if(map[nums[left]] == 0)
                    map.erase(nums[left]);

                left++;
            }

            if(map.size() <= k)
                count = count + (right-left+1);

            right++;
        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k-1);
    }
};
*/