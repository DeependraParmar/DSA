#include <iostream>
using namespace std;
class Node{
    public:
        Node* prev;
        int data;
        Node* next;

    Node(int data){
        Node* prev = NULL;
        this->data = data;
        Node* next = NULL;
    }
};

void insertAtHead(Node* &head, int data, int &n){
    Node* newn = new Node(data);
    newn->next = head;
    head->prev = newn;
    head = newn;
    n++;
    return;
}
void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* node1 = new Node(9);
    Node* head = node1;
    Node* tail = node1;
    int n = 1;

    insertAtHead(head, 10, n);
    printLinkedList(head);
    cout << "Total Nodes in LL are: " << n << endl;
    return 0;
}