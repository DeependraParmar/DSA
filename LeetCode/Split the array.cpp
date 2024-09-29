/*
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i=0; i<nums.size(); i++)
            freq[nums[i]]++;

        for(auto i: freq){
            if(i.second > 2)
                return false;
        }

        return true;
    }
};
*/