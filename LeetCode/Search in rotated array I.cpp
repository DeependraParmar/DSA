/*
class Solution {
public:
    int pivotElement(vector<int> &nums){
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;

        while(start < end){
            if(nums[mid] >= nums[0])
                start = mid+1;
            else
                end = mid;

            mid = start + (end-start)/2;
        }
        return end;
    }
    int binarySearch(vector<int> &nums, int target, int start, int end){
        int mid = start + (end-start)/2;

        while(start <= end){
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                end = mid-1;
            else
                start = mid+1;

            mid = start + (end-start)/2;
        }

        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans;

        // if array is already sorted
        if(nums[0] < nums[n-1] || nums.size() == 1){
            ans = binarySearch(nums, target, 0, n-1);
        }
        else{
            int pivotIndex = pivotElement(nums);
            if(target >= nums[0])
                ans = binarySearch(nums, target, 0, pivotIndex-1);
            else
                ans = binarySearch(nums, target, pivotIndex, n-1);

        }
        return ans;
    }
};
*/