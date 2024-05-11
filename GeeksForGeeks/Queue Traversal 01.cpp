/*
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        int n = q.size();
        stack<int> s;

        for(int i=0; i<n; i++){
            int element = q.front();
            q.pop();
            s.push(element);
        }

        for(int i=0; i<n; i++){
            int element = s.top();
            s.pop();
            q.push(element);
        }

        return q;
    }
};
*/