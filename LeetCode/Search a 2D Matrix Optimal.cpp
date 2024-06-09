/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = matrix.size();
        int m = matrix[0].size();
        int start = 0;
        int end = n * m - 1;
        int mid = start + (end-start)/2;

        while(start <= end){
            int row = mid / m;
            int col = mid % m;

            if(matrix[row][col] == target)
                return true;

            else if(matrix[row][col] < target)
                start = mid + 1;

            else
                end = mid - 1;

            mid = start + (end-start)/2;
        }

        return false;
    }
};
*/