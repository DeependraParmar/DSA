/*
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        int mid = start + (end-start)/2;

        while(start < end){
            if(nums[mid] < nums[end])
                end = mid;
            else
                start = mid+1;

            mid = start + (end-start)/2;
        }

        return nums[start];
    }
};
*/