/*
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(head -> next == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        fast = fast -> next -> next;

        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
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