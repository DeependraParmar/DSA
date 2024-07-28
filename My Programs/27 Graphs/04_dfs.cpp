#include <iostream>
#include <unordered_map>
#include <set>
#include <queue>
#include <vector>
using namespace std;

class Graph{
    public:
        unordered_map<int, set<int>> adj;

    void addEdge(int u, int v, bool direction){
        adj[u].insert(v);

        if(direction == 0)
            adj[v].insert(u);
    }
    void printList(){
        cout << "****** Adjacency List ******" << endl;
        for(int i=0; i<adj.size(); i++){
            cout << i << " --> ";
            for(auto j: adj[i]){
                cout << j << " ";
            }
            cout << endl;
        }
    }

    void dfs(vector<bool> &visited, int node){
        cout << node << " ";
        visited[node] = true;

        for(auto i: adj[node]){
            if(!visited[i]){
                dfs(visited, i);
            }
        }          
    }
};
int main(){
    int nodes,edges;
    cout << "Enter the number of nodes: ";
    cin >> nodes;

    cout << "Enter the number of edges: ";
    cin >> edges;
    cout << endl;

    Graph g;

    for(int i=0; i<edges; i++){
        int u,v;
        cout << "Enter the two nodes of edges(seperated by space): ";
        cin >> u >> v;

        g.addEdge(u,v,0);
    }

    cout << endl << endl;
    g.printList();

    vector<bool> visited(nodes, false);

    cout << endl << "DFS Traversal is: ";
    g.dfs(visited, 0); 

    return 0;
}