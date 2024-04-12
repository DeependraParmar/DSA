/*
Node* sortList(Node *head){
    if(head == NULL || head -> next == NULL)
        return head;

    int arr[3] = {0};
    Node* temp = head;
    
    while(temp != NULL){
        arr[temp->data]++;
        temp = temp -> next;
    }

    temp = head;
    int index = 0;

    while(temp != NULL){
        int count = arr[index];
        for(int i=0; i<count; i++){
            temp -> data = index;
            temp = temp -> next;
        }
        index++;
    }

    return head;
}
*/