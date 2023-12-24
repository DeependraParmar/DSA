/*
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i=digits.size()-1; i>=0; i--){
            // adding 1 at last integer
            if(i==n-1){
                digits[i]++;
            }

            // assigning zero and forwarding the carry
            if(digits[i] == 10){
                digits[i] = 0;
                if(i!=0){
                    digits[i-1]++;
                }
                else{
                    digits.push_back(0);
                    digits[i] = 1;
                }
            }
        }

        return digits;
    }
};
*/