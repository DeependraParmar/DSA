/*
class Solution{
    public:
    bool isSafe(int i, int j, int n, vector<vector<int>> &vis, vector<vector<int>> &a) {
        if(i<0 || j<0 || i==n || j==n || vis[i][j]==1 || a[i][j]==0) return 0;
        return 1;
    }
    void f(int i, int j, vector<vector<int>> &a, int n, string &path, vector<vector<int>> &vis, vector<string> &ans) {
        if(i==n-1 && j==n-1) {
            ans.push_back(path);
            return;
        }
        vis[i][j]=1;
        //Down
        if(isSafe(i+1, j, n, vis, a)) {
            path.push_back('D');
            f(i+1, j, a, n, path, vis, ans);
            path.pop_back();
        }
        //up
        if(isSafe(i-1, j, n, vis, a)) {
            path.push_back('U');
            f(i-1, j, a, n, path, vis, ans);
            path.pop_back();
        }
        //left
        if(isSafe(i, j-1, n, vis, a)) {
            path.push_back('L');
            f(i, j-1, a, n, path, vis, ans);
            path.pop_back();
        }
        //Down
        if(isSafe(i, j+1, n, vis, a)) {
            path.push_back('R');
            f(i, j+1, a, n, path, vis, ans);
            path.pop_back();
        }
        vis[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &a, int n) {
        int i=0, j=0;
        string path="";
        vector<string> ans;
        if(a[i][j]==0) return ans;
        vector<vector<int>> vis(n, vector<int> (n, 0));
        f(i, j, a, n, path, vis, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
*/