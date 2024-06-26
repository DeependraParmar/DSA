/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head -> next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=0; i<n; i++)
            fast = fast -> next;

        if(fast == NULL)
            return head -> next;

        while(fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
        }

        ListNode* nodeToDelete = NULL;
        if(slow && slow -> next){
            nodeToDelete = slow -> next;
            slow -> next = nodeToDelete -> next;
        }
        delete nodeToDelete;

        return head;
    }
};
*/