/*
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            vector<int> digit;

            while(num){
                int rem = num % 10;
                digit.push_back(rem);
                num /= 10;
            }

            for(int i=digit.size()-1; i>=0; i--)
                ans.push_back(digit[i]);
        }

        return ans;
    }
};
*/