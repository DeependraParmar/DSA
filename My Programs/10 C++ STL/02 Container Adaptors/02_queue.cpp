#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Learn");
    q.push("Logics");
    q.push("is");
    q.push("Amazing...");

    cout << "First Element: " << q.front() << endl;
    cout << "Size before pop: " << q.size() << endl;
    q.pop();
    cout << "First element after pop: " << q.front() << endl;
    cout << "Size after pop: " << q.size() << endl;



    return 0;
}