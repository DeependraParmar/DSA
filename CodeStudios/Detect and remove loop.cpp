/*
Node* returnPointOfIntersection(Node* head){
    if(head == NULL || head -> next == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if( fast != NULL)
            fast = fast -> next;

        slow = slow -> next;

        if(slow == fast){
            return slow;
        }
    }

    return NULL;
}
Node* startOfLoop(Node* head){
    if(head == NULL)
        return NULL;

    Node* intersection = returnPointOfIntersection(head);

    if(intersection == NULL)
        return NULL;

    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}
Node *removeLoop(Node *head)
{
    if(head == NULL){
        return NULL;
    }

    Node* start = startOfLoop(head);

    if(start == NULL)
        return head;

    Node* temp = start;

    while(temp -> next != start){
        temp = temp -> next;
    }

    temp -> next = NULL;

    return head;
}
*/