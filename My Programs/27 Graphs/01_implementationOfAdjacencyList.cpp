#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

template <typename T>

class Graph{
    public:
        unordered_map<T, list<T>> adj_list;

        void addEdge(T u, T v, bool direction){
            // direction = 0, undirected graph
            // direction = 1, directed graph

            // create an edge from u to v

            adj_list[u].push_back(v);

            if(direction == 0)
                adj_list[v].push_back(u);
        }

        void print(){
            for(auto i: adj_list){
                cout << i.first << " --> ";
                for(auto j: i.second){
                    cout << j << " ";
                }
                cout << endl;
            }
        }
};
int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges: ";
    cin >> m;

    Graph<int> g;

    for(int i=0; i<m; i++){
        int u,v;
        cout << "Enter the two nodes seperated by comma: ";
        cin >> u >> v;

        g.addEdge(u,v,0);
    }

    cout << endl << endl;
    g.print();

    return 0;
}