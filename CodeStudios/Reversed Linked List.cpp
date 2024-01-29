/*
Node* reverseLinkedList(Node *head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* current = head;
    Node* previous = NULL;
    Node* forward = NULL;

    while(current != NULL){
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
    }
    return previous;
}
*/