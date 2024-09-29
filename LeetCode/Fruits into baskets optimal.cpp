/*
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> map;
        int ans = 0, left = 0, right = 0;
        int n = fruits.size();

        while(right < n){
            map[fruits[right]]++;

            if(map.size() <= 2)
                ans = max(ans, right - left + 1);
            else{
                while(map.size() > 2){
                    map[fruits[left]]--;

                    if(map[fruits[left]] == 0)
                        map.erase(fruits[left]);
                    
                    left++;
                }
            }

            right++;
        }

        return ans;
    }
};
*/