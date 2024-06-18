/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;

        ListNode* newHead = reverseList(head -> next);

        ListNode* next = head -> next;
        next -> next = head;
        head -> next = NULL;

        return newHead;
    }
};
*/