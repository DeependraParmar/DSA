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

    void bfs(vector<bool> &visited, int node){
        queue<int> q;
        q.push(node);
        visited[node] = 1;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            cout << frontNode << " ";

            for(auto i: adj[frontNode]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = 1;
                }
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

    cout << endl << "BFS Traversal is: ";
    g.bfs(visited, 0);

    return 0;
}