/*
class Solution {
public:
    bool binarySearch(vector<vector<int>> &matrix, int row, int m, int target ){
        int start = 0;
        int end = m-1;
        int mid = start + (end-start)/2;

        while(start <= end){
            if(matrix[row][mid] == target)
                return true;

            else if(matrix[row][mid] > target)
                end = mid - 1;

            else
                start = mid + 1;

            mid = start + (end-start)/2;
        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = matrix.size();
        int m = matrix[0].size();
        bool ans = false;

        for(int i=0; i<n; i++){
            if(target >= matrix[i][0] && target <= matrix[i][m-1]){
                ans = binarySearch(matrix, i, m, target);
            }
        }

        return ans;
    }
};
*/
