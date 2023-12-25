/*
#include <bits/stdc++.h>
char validCharacter(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        return ch-'a'+'A';
    }
}
string convertString(string str)
{
    int i = 1;
    str[0] = validCharacter(str[0]);
    while(str[i]!='\0'){
        if(str[i] == ' ')
            str[i+1] = validCharacter(str[i+1]);

        i++;
    }

    return str;
}
*/