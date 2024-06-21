/*
int countNodesinLoop(struct Node *head)
{
    if(head == NULL || head -> next == NULL)
        return 0;

    Node* slow = head;
    Node* fast = head;
    Node* start = NULL;
    int count = 0;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast){
            count = 1;
            fast = fast -> next;

            while(slow != fast){
                fast = fast -> next;
                count++;
            }
            break;
        }
    }

    return count;
}
*/