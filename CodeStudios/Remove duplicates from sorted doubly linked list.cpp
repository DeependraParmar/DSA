/*
Node * removeDuplicates(Node *head)
{
    if(head == NULL)
        return NULL;

    Node* current = head;
    Node* temp = NULL;
    Node* next = NULL;

    while(current && current -> next){
        if(current -> data != current -> next -> data){
            current = current -> next;
        }
        else{
            temp = current -> next;
            next = temp -> next;

            if(next){
                current -> next = next;
                next -> prev = current;
            }
            else{
                current -> next = NULL;
            }

            delete temp;
        }
    }

    return head;
}
*/