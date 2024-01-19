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
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory cleared for " << value << endl;
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
void insertAtPosition(int data, int pos){
    if(pos<=0 || pos>n+1){
        cout << "Invalid Position for Insertion" << endl;
        return;
    }
    else if(pos==1){
        insertAtHead(data);
    }
    else if(pos==n+1){
        insertAtTail(data);
    }
    else{
        newn = new Node(data);
        temp = head;
        int i=1;

        while(i<pos-1){
            temp = temp->next;
            i++;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        n++;
        return;
    }
}
void print(){
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(int pos){
    if(pos<=0 || pos>n){
        cout << "Invalid Position input for Deletion" << endl;
    }
    else if(pos == 1){
        temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        n--;
        delete temp;
        return;
    }
    else if(pos == n){
        temp = tail;
        temp->prev->next = NULL;
        tail = temp->prev;
        temp->prev = NULL;
        n--;
        delete temp;
    }
    else{
        temp = head;
        int i=1;

        while(i<pos){
            temp = temp->next;
            i++;
        }
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        temp->next = NULL;
        temp->prev = NULL;
        n--;
        delete temp;
    }
}

int main(){
    Node* node1 = new Node(9);
    if(head == NULL){
        head = node1;
        tail = node1;
        n++;
    }

    insertAtHead(10); // inserting node at head
    insertAtTail(8);  // inserting node at tail
    insertAtPosition(3,2); // inserting at particular position
    insertAtPosition(5,1); // inserting node at first position
    insertAtPosition(99,6); // inserting node at last position
    // insertAtPosition(19,99); // invalid position for insertion case

    cout << endl;
    print();
    cout << "Total Nodes in LL are: " << n << endl;

    cout << endl << endl;
    deleteNode(1); // deleting the first node
    deleteNode(5); // deleting the last node
    deleteNode(3); // deleting the node at position 3
    print();
    cout << "Total Nodes in LL are: " << n << endl;
    return 0;
}