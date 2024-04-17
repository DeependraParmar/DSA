/*
#include <bits/stdc++.h>

class TwoStack {
    int* arr;
    int size;
    int top;
    int bottom;

public:
    TwoStack(int s) {
        this->size = s;
        arr = new int[s];
        top = -1;
        bottom = s;
    }

    void push1(int num) {
        if(bottom - top > 1){
            top++;
            arr[top] = num;
        }
    }

    void push2(int num) {
        if(bottom - top > 1){
            bottom--;
            arr[bottom] = num;
        }
    }

    int pop1() {
        if(top>=0){
            int ans = arr[top];
            top--;
            return ans;
        }
        else{
            return -1;
        }
    }

    int pop2() {
        if(bottom < size){
            int ans = arr[bottom];
            bottom++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
*/