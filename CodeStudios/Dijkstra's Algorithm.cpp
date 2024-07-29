/*
#include <bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int, list<pair<int,int>>> adj;

    for(int i=0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> distance(vertices, INT_MAX);

    set<pair<int,int>> s;
    distance[source] = 0;

    s.insert(make_pair(0,source));

    while(!s.empty()){
        // getting top record
        auto top = *(s.begin());
        int nodeDistance = top.first;
        int topNode = top.second;

        s.erase(s.begin());

        for(auto i: adj[topNode]){
            if(nodeDistance + i.second < distance[i.first]){
                auto record = s.find(make_pair(distance[i.first], i.first));

                if(record != s.end()){
                    s.erase(record);
                }

                distance[i.first] = nodeDistance + i.second;

                s.insert(make_pair(distance[i.first], i.first));
            }
        }
    }

    return distance;
}

*/