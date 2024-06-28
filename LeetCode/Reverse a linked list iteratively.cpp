/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie();

        if(head == NULL || head -> next == NULL)
            return head;

        ListNode* prev = NULL;
        ListNode* temp = head;

        while(temp != NULL){
            ListNode* next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }

        return prev;
    }
};
*/