/*
#include<unordered_map>
#include<list>
#include<queue>
#include<bits/stdc++.h>

bool isCyclicUsingBFS(unordered_map<int,list<int>> &adj, unordered_map<int,bool> &visited, int src){
    unordered_map<int,int> parent;
    queue<int> q;

    parent[src] = -1;
    visited[src] = 1;

    q.push(src);

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        for(auto i: adj[frontNode]){
            if(visited[i] == true && i != parent[frontNode])
                return true;

            else if(!visited[i]){
                q.push(i);
                visited[i] = 1;
                parent[i] = frontNode;
            }
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
            bool ans = isCyclicUsingBFS(adj, visited, i);

            if(ans == 1)
                return "Yes";
        }
    }

    return "No";
}

*/