#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <stack>
#include <limits.h>

using namespace std;

class Graph{
    public:
        unordered_map<int, list<pair<int,int>>> adj;

    void addEdge(int u, int v, int weight){
        pair<int,int> p = make_pair(v,weight);
        adj[u].push_back(p);
    }

    void printList(){
        for(auto i: adj){
            cout << i.first << " --> ";
            for(auto j: i.second){
                cout << '[' << j.first << "," << j.second << ']' << " ";
            }
            cout << endl;
        }
    }

    void dfs(unordered_map<int, bool> &visited, stack<int> &s, int node){
        visited[node] = 1;

        for(auto i : adj[node]){
            if(!visited[i.first]){
                dfs(visited, s, i.first);
            }
        }

        s.push(node);
    }

    void shortestPath(int src, vector<int> &distance, stack<int> &s){
        distance[src] = 0;

        while(!s.empty()){
            int top = s.top();
            s.pop();

            if(distance[top] != INT_MAX){
                for(auto i : adj[top]){
                    if (distance[top] + i.second < distance[i.first])
                    {
                        distance[i.first] = distance[top] + i.second;
                    }
                }
            }
        }
    }
};

int main(){
    // Getting the number of nodes and edges
    int nodes, edges;
    cout << "Enter the number of nodes: ";
    cin >> nodes;

    cout << "Enter the number of edges: ";
    cin >> edges;

    // Creating the graph
    Graph g;

    // Preparing the adjacency list over here.
    for(int i=0; i<edges; i++){
        int u, v, w;
        
        cout << "Enter (u, v, w) seperated by space: ";
        cin >> u >> v >> w;

        g.addEdge(u,v,w);
    }

    // Printing the adjacency list
    cout << endl << endl;
    g.printList();

    // topological sort
    cout << endl;
    unordered_map<int, bool> visited(nodes);
    stack<int> s;

    // getting topo linear order in stack
    for(int i=0; i<nodes; i++){
        if(!visited[i]){
            g.dfs(visited,s, i);
        }
    }

    // source and initialised the distance vector with infinite.
    int source = 1;
    vector<int> distance(nodes, INT_MAX);
    
    // updating the distance vector with original shortest distances
    g.shortestPath(source, distance, s);
    
    // printing the distance vector (final ans)

    cout << endl << "Final Distance Vector is: " << "[";
    for(int i=0; i<distance.size(); i++){
        if(distance[i] == INT_MAX)
            cout << "INF ";
        else{
            cout << distance[i] << " ";
        }
    }

    cout << "]" << endl;

    return 0;
}