#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> maxHeap;
    maxHeap.push(1);
    maxHeap.push(3);
    maxHeap.push(2);
    maxHeap.push(7);

    cout << "Printing the priority queue: ";
    int n = maxHeap.size();
    for(int i=0; i<n; i++){
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }


    // creating a minHeap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(1);
    minHeap.push(3);
    minHeap.push(2);
    minHeap.push(7);

    cout << endl << endl << "Printing the priority queue: ";
    int m = minHeap.size();
    for (int i = 0; i < m; i++)
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    return 0;
}