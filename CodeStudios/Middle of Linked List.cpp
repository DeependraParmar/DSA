// Basic approach 
/*
int getLength(Node* head){
    Node* temp = head;
    int n = 0;

    while(temp != NULL){
        temp = temp->next;
        n++;
    }

    return n;
}
Node* getMid(Node* head){
    int len = getLength(head);
    int mid = (len/2);
    Node* temp = head;
    int count=0;

    if(len % 2 == 0){
        while(count<mid){
        temp = temp->next;
        count++;
        }
        return temp;
    }
    else{
        while(count<mid){
        temp = temp->next;
        count++;
        }
        return temp;
    }
}
Node *findMiddle(Node *head) {
    return getMid(head);
}
*/