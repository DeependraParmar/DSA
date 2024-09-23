/*
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> count;

        for(int i=0; i<arr.size(); i++)
            count[arr[i]]++;

        set<int> freq;

        for(auto i : count){
            if(freq.find(i.second) != freq.end())
                return false;

            freq.insert(i.second);
        }

        return true;
    }
};
*/