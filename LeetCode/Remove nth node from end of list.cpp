/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head -> next == NULL)
            return NULL;

        ListNode* temp = head;
        int length = 0;
        while(temp){
            temp = temp -> next;
            length++;
        }   

        int position = length - n;

        if(length == n){
            temp = head;
            head = temp -> next;
            delete temp;
            return head;
        }

        temp = head;
        for(int i=1; i<position; i++)
            temp = temp -> next;
        
        ListNode* nodeToDelete = NULL;

        if(temp && temp -> next){
            nodeToDelete = temp -> next;
            temp -> next = nodeToDelete -> next;
        }
        delete nodeToDelete;

        return head;
    }
};
*/