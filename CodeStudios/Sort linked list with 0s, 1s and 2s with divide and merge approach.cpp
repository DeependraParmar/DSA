/*
void insertAtTail(Node* &tail, Node* current){
    tail -> next = current;
    tail = current;
}

Node* sortList(Node *head){
    if(head == NULL || head -> next == NULL)
        return head;

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* temp = head;

    while(temp != NULL){
        int value = temp -> data;

        if(value == 0){
            insertAtTail(zeroTail, temp);
        }
        else if(value == 1){
            insertAtTail(oneTail, temp);
        }
        else{
            insertAtTail(twoTail, temp);
        }

        temp = temp -> next;
    }

    // merge 3 seperate sorted lists
    if(oneHead -> next != NULL){
        zeroTail -> next = oneHead -> next;
    }
    else{
        zeroTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;

    head = zeroHead -> next;
    delete zeroHead, oneHead, twoHead, zeroTail, oneTail, twoTail;

    return head;
}
*/