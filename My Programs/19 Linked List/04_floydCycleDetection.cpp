/*
Node* floydCycleDetection(Node* head){
    if(head == NULL)
        return NULL;
    
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){ // only check for fast != NULL and not fast->next != NULL
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }

    return NULL;
}
*/