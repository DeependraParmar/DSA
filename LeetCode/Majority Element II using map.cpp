/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int n = nums.size();

        for(int i=0; i<n; i++)
            map[nums[i]]++;

        vector<int> ans;

        for(auto i:map){
            if(i.second > n/3)
                ans.push_back(i.first);
        }

        return ans;
    }
};
*/