/*
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        Node* temp = head;

        if(head == NULL || head -> next == NULL)
            return NULL;

        if(x == 1){
            temp -> next -> prev = temp -> prev;
            head = temp -> next;
            delete temp;
        }
        else{
            for(int i=1; i<x && temp != NULL ; i++)
                temp = temp -> next;


            if(temp -> next == NULL)
                temp -> prev -> next = NULL;

            else{
                temp -> prev -> next = temp -> next;
                temp -> next -> prev = temp -> prev;
            }

            delete temp;
        }

        return head;
    }
};
*/