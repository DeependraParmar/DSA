#include <iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;
 
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(top == size-1)
                cout << "Sorry !! Stack Overflow" << endl;

            else{
                this->top += 1;
                arr[top] = element;
                cout << "Pushed: " << element << endl;
            }
        }
        void pop(){
            if(top == -1)
                cout << "Sorry !! Stack Underflow" << endl;

            else{
                cout << "Popped: " << arr[top] << endl;
                this -> top -= 1;
            }
        }
        int peek(){
            if(top == -1)
                cout << "Stack is empty" << endl;
            
            return arr[top];
        }
        bool empty(){
            if(top == -1)
                return true;
            else
                return false;
        }
        void print(){
            if(top == -1)
                cout << "Cannot print anything!! Stack is empty";
            else{
                cout << endl << "Stack looks like: ";
                for(int i=top; i>=0; i--){
                    cout << arr[i] << " ";
                }
            }
        }
};
int main(){
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;
    Stack s(size);

    // pushing the elements
    cout << endl;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    s.print();

    cout << endl;
    cout << "Peak element of the stack is: " << s.peek() << endl;
    cout << "Is stack empty: " << s.empty() <<  endl;

    cout << endl;

    // popping the elements out of the stack
    s.pop();
    s.pop();
    s.print();

    return 0;
}