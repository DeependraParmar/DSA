/*
#include <bits/stdc++.h>
int findMinimumCost(string str) {
    if(str.length() %2 == 1)
        return -1;

    stack<char> stack;

    // removing the valid pairs here
    for(int i=0; i<str.length(); i++){
        char ch = str[i];

        if(ch == '{')
          stack.push(ch);
        else {
          if (!stack.empty() && stack.top() == '{')
              stack.pop();
          else
              stack.push(ch);
        }
    }

    int openCount = 0, closeCount = 0;

    while(!stack.empty()){
      if(stack.top() == '{')
        openCount++;
      else
        closeCount++;

      stack.pop();
    }

    int ans = (openCount + 1)/2 + (closeCount + 1)/2;
    return ans;
}
*/