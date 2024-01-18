#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data, int &n){
    // getting a newnode created 
    Node *newn = new Node(data);
    newn->next = head;
    head = newn;
    n++;
}
void insertAtTail(Node* &tail, int data, int &n){
    Node* newn = new Node(data);
    tail->next = newn;
    tail = newn;
    n++;
}
void insertAtPosition(Node* &head,Node* &tail, int data,int pos, int &n){
    if(pos<=0 || pos>n+1){
        cout << "Invalid Position for Insertion" << endl;
        return;
    }
    else if(pos == 1){
        insertAtHead(head, data, n);
        return;
    }
    else if(pos == (n+1)){
        insertAtTail(tail, data, n);
        return;
    }
    else{
        Node *newn = new Node(data);
        Node *temp = head;

        int i = 1;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }

        newn->next = temp->next;
        temp->next = newn;
        n++;

        return;
    }
}
void printLinkedList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    Node *node1 = new Node(11);
    int n = 1;
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 9,n);
    insertAtTail(tail, 32,n);
    insertAtTail(tail, 19,n);
    insertAtPosition(head, tail, 80, 1, n);
    insertAtPosition(head, tail, 100, 6, n);
    insertAtPosition(head, tail, 8, 3, n);
    printLinkedList(head);


    cout << endl;
    cout << "Total nodes are: " << n << endl;

    return 0;
}