/*
#include <bits/stdc++.h>
class Queue {
public:
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue() {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty() {
        if(qfront == rear){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        if(rear == size){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[rear] = data;
        rear++;
    }

    int dequeue() {
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
*/