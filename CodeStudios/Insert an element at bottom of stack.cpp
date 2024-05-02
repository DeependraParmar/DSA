/*
#include <bits/stdc++.h>
void solve(stack<int> &myStack, int size, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();
    solve(myStack, size, x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x)
{
    solve(myStack, myStack.size(), x);
    return myStack;
}

*/