/*
Node* startOfLoop(Node* head){
    if(head == NULL)
        return head;
    
    Node* intersection = floydCycleDetection(head); // returns the point of intersection
    Node* slow = head;

    while(slow != intersection){
        slow ->= next;
        intersection ->= next;
    }

    return slow;
}
*/