#include <iostream>
using namespace std;

void push(int arr[], int &top, int n, int data){
    if(top == n-1){
        cout << "Sorry!! Stack overflow" << endl;
    }
    else{
        top++;
        arr[top] = data;
        cout << "Pushed: " << data << endl;
    }
}
void pop(int arr[], int &top){
    if(top == -1){
        cout << "Sorry! Stack Underflow" << endl;
    }
    else{
        cout << "Popped: " << arr[top] << endl;
        top--;
    }
}
int peek(int arr[], int top){
    if(top == -1)
        cout << "Sorry!! stack is empty" << endl;
    
    return arr[top];
}
int size(int top){
    return top+1;
}
bool empty(int top){
    if(top == -1)
        return true;
    return false;
}
void print(int arr[], int top){
    cout << endl << "Stack looks like: ";
    for(int i=top; i>=0; i--)
        cout << arr[i] << " ";
}
int main(){
    int n, top = -1;
    cout << "Enter the size of the stack: ";
    cin >> n;

    int *arr = new int[n];
    push(arr, top, n, 2);
    push(arr, top, n, 4);
    push(arr, top, n, 6);
    push(arr, top, n, 8);
    print(arr, top);

    cout << endl << endl;
    cout << "Size of Stack is: " << size(top) << endl;
    cout << "Is Stack empty: " << empty(top) << endl;
    cout << "Element at top is: " << peek(arr, top) << endl;

    cout << endl;
    pop(arr, top);
    pop(arr, top);
    print(arr, top);


    return 0;
}