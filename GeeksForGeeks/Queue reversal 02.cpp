/*
class Solution{
    private:
    void solve(queue<int> &q, int size){
        if(size == 0){
            return;
        }
        int element = q.front();
        q.pop();
        solve(q, size-1);
        q.push(element);
    }
    public:
    queue<int> rev(queue<int> q)
    {
        solve(q, q.size());
        return q;
    }
};
*/