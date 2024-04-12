/*
Node *removeDuplicates(Node *head)
{
    Node *prev = head;
    Node *prevOfNext = NULL;
    Node *temp = NULL;

    while (prev != NULL){
        Node *next = prev->next;
        while (next != NULL){
            if (prev->data != next->data){
                prevOfNext = next;
                next = next->next;
            }
            else{
                temp = next;
                prevOfNext -> next = temp -> next;
                next = next->next;
                delete temp;
            }
        }
        prev = prev -> next;
    }

    return head;
}
*/