#include <iostream>
#include <vector>
using namespace std;
template <typename T>

class Graph{
    public:
        vector<vector<T>> adj_matrix;

        Graph(int n){
            adj_matrix.resize(n);
            for(int i=0; i<n; i++){
                adj_matrix[i].resize(n);
            }
        }

        void addEdge(T u, T v, bool direction){
            // direction: 0 --> undirected graph from u to v & v to u
            // direction: 1 --> directed graph from u to v

            adj_matrix[u][v] = 1;

            if(direction == 0)
                adj_matrix[v][u] = 1;
        }

        void print(){
            for(int i=0; i<adj_matrix.size(); i++){
                for(int j=0; j<adj_matrix[i].size(); j++){
                    cout << adj_matrix[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main(){
    int n;
    cout << "Enter the number of nodes in the graph: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges in the graph: ";
    cin >> m;

    Graph<int> g(n);

    for(int i=0; i<m; i++){
        int u,v;
        cout << "Enter two nodes seperated by space: ";
        cin >> u >> v;

        g.addEdge(u,v,1);
    }

    cout << endl << endl;
    g.print();
     
    return 0;
}