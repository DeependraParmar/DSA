/*
class Solution {
private:
    vector<int> nextIndices(vector<int> arr, int n){
        stack<int> stack;
        stack.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0; i--){
            int current = arr[i];
            while(stack.top() != -1 && arr[stack.top()] >= current)
                stack.pop();

            ans[i] = stack.top();
            stack.push(i);
        }
        return ans;
    }
    vector<int> prevIndices(vector<int> arr, int n){
        stack<int> stack;
        stack.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            int current = arr[i];
            while(stack.top() != -1 && arr[stack.top()] >= current)
                stack.pop();

            ans[i] = stack.top();
            stack.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        vector<int> prev(n);

        next = nextIndices(heights, n);
        prev = prevIndices(heights, n);

        int area = INT_MIN;
        for(int i=0; i<n; i++){
            int length = heights[i];

            if(next[i] == -1)
                next[i] = n;

            int breadth = next[i] - prev[i] - 1;
            int newArea = length * breadth;
            area = max(area, newArea);
        }

        return area;
    }
};
*/