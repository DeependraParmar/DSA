/*
class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node *head= *head_ref;
        Node *curr=head;

        while(curr!=NULL){
            if(curr->data==x){
                if(curr->prev!=NULL){
                    curr->prev->next=curr->next;
                }
                else{
                    *head_ref=curr->next;
                }
                if(curr->next!=NULL){
                    curr->next->prev=curr->prev;
                }
            }
            curr=curr->next;
        }
       return;
    }
};
*/