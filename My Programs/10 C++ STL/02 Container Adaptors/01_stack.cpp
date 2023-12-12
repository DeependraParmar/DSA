#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Learn");
    s.push("Logics");
    s.push("is");
    s.push("Amazing...");

    cout << "Size of Stack: " << s.size() << endl;

    cout << "Top element: " << s.top() << endl;
    s.pop();

    cout << endl << "Top element after pop: " << s.top() << endl;
    cout << "Is Stack Empty ? " << s.empty() << endl; 

    return 0;
}