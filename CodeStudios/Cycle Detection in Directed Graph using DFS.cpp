/*
#include <unordered_map>
#include <list>

bool checkCycleDFS(unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfs_visited, int node){
    visited[node] = true;
    dfs_visited[node] = true;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = checkCycleDFS(adj, visited, dfs_visited, neighbour);
            if(cycleDetected)
                return true;
        }
        else if(dfs_visited[neighbour] == true){
            return true;
        }
    }

    dfs_visited[node] = false;
    return false;
}
bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
    unordered_map<int, list<int>> adj;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfs_visited;

    // adjacency list creation
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // calling dfs for all components
    for(int i=0; i<v; i++){
        if(!visited[i]){
            bool cycleDetected = checkCycleDFS(adj, visited, dfs_visited, i);

            if(cycleDetected)
                return true;
        }
    }

    return false;
}

*/