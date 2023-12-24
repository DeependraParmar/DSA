/*
class Solution {
private:
    bool isMaximumCandies(vector<int> candies, int maxCandies){
        bool isMax = true;
        for(int i=0; i<candies.size(); i++){
            if(candies[i] > maxCandies){
                isMax = false;
                break;
            }
        }
        return isMax;
    }
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCandies = 0;

        for(int i=0; i<candies.size(); i++){
            maxCandies = candies[i] + extraCandies;
            ans.push_back(isMaximumCandies(candies,maxCandies));
        }
        return ans;
    }
};
*/