/*
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        for(int i=0; i<nums.size(); i++){
            if(freq[nums[i]] == 1){
                if(freq.find(nums[i]-1) == freq.end()){
                    if(freq.find(nums[i]+1) == freq.end())
                        ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};
*/