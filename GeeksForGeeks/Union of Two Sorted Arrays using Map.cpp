/*
class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        map<int,int> frequency;
        vector<int> ans;

        for(int i=0; i<n; i++){
            frequency[arr1[i]]++;
        }

        for(int i=0; i<m; i++){
            frequency[arr2[i]]++;
        }

        for(auto i:frequency){
            ans.push_back(i.first);
        }

        return ans;
    }
};
*/