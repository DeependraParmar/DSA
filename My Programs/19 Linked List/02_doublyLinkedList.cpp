#include <iostream>
using namespace std;
class Node{
    public:
        Node* prev;
        int data;
        Node* next;

    Node(int data){
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL; 
Node* temp = NULL;
Node* newn;
int n = 0;

void insertAtHead(int data){
    newn = new Node(data);
    newn->next = head;
    head->prev = newn;
    head = newn;
    n++;
    return;
}
void insertAtTail(int data){
    newn = new Node(data);
    tail->next = newn;
    newn->prev = tail;
    tail = newn;
    n++;
    return;
}
void print(){
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    Node* node1 = new Node(9);
    if(head == NULL){
        head = node1;
        tail = node1;
        n++;
    }

    insertAtHead(10);
    insertAtTail(8); 
    print();
    cout << "Total Nodes in LL are: " << n << endl;
    return 0;
}