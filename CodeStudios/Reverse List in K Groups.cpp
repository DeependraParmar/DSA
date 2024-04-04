/*
int getLength(Node* head) {
    int length  = 0;
    while(head != NULL) {
        length ++;
        head = head -> next;
    }
    return length;
}

Node* kReverse(Node* head, int k) {
    if(head == NULL  || head -> next == NULL) {
        return head;
    }
    if(getLength(head) < k) {
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    int count = 0;

    while(curr != NULL  && count < k) {
        Node* next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count ++;
    }

    head -> next = kReverse(curr, k);
    return prev;
}
*/