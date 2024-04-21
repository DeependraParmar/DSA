/*
bool openingBracket(char ch){
    if(ch == '{' || ch == '(' || ch == '[')
        return true;
    return false;
}
bool isValidParenthesis(string s)
{
    stack<char> stk;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(openingBracket(ch)){
            stk.push(ch);
        }
        else{
            if (!stk.empty()) {
              char peek = stk.top();
              if (ch == ')' && peek == '(' || ch == ']' && peek == '[' ||
                  ch == '}' && peek == '{') {
                stk.pop();
              } else {
                return false;
              }
            } else
              return false;
        }
    }

    if(stk.empty())
        return true;
    else
        return false;
}
*/