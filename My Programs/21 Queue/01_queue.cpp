#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;   
    q.push(10);
    q.push(20);
    q.push(92);

    cout << "Size of queue after push is: " << q.size() << endl;

    q.pop();

    cout << "Size of queue after pop is: " << q.size() << endl;

    cout << "Is queue empty: " << q.empty() << endl;


    return 0;
}