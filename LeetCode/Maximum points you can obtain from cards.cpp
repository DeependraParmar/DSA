/*
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0, rightSum = 0, ans = 0;

        for(int i=0; i<=k-1; i++)
            leftSum += cardPoints[i];

        ans = leftSum;

        int rightIndex = cardPoints.size() - 1;

        for(int i=k-1; i>=0; i--){
            leftSum -= cardPoints[i];
            rightSum += cardPoints[rightIndex--];
            ans = max(ans, leftSum + rightSum);
        }

        return ans;
    }
};
*/