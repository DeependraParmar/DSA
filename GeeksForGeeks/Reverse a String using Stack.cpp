/*
char* reverse(char *S, int len){
    stack<char> s;

    for(int i=0; i<len; i++)
        s.push(S[i]);

    for(int i=0; i<len; i++){
        S[i] = s.top();
        s.pop();
    }
    S[len] = '\0';

    return S;
}
*/