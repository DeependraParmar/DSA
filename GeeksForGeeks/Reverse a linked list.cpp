/*
class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node *prev = NULL, *temp = head;

        if(head == NULL || head -> next == NULL)
            return head;

        while(temp != NULL){
            Node* next = temp -> next;
            temp -> next = temp -> prev;
            temp -> prev = next;
            prev = temp;
            temp = next;
        }

        return prev;
    }
};
*/