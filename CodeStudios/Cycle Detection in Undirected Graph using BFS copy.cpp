/*
bool isCyclicUsingDFS(unordered_map<int,list<int>> &adj, unordered_map<int,bool> &visited, int src, int parentNode){
    visited[src] = 1;

    for(auto neighbour: adj[src]){
        if(!visited[neighbour]){
            bool cycleDetected = isCyclicUsingDFS(adj, visited, neighbour, src);

            if(cycleDetected)
                return true;
        }
        else if(neighbour != parentNode){
            return true;
        }
    }

    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int,list<int>> adj;
    unordered_map<int,bool> visited;

    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for all disconnected components
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCyclicUsingDFS(adj, visited, i, -1);

            if(ans == 1)
                return "Yes";
        }
    }

    return "No";
}
*/