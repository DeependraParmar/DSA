/*
void splitCircularList(Node *head){
    Node* slow = head;
    Node* fast = head;

    while(fast -> next -> next != head){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    fast = fast -> next;
    fast -> next = slow -> next;
    slow -> next = head;
}
*/