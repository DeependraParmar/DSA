/*
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ios_base::sync_with_stdio(false);
        cin.tie();

        if(head == NULL)
            return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;

            if(fast != NULL)
                fast = fast -> next;

            if(slow == fast){
                slow = head;

                while(slow != fast){
                    slow = slow -> next;
                    fast = fast -> next;
                }

                return slow;
            }
        }

        return NULL;
    }
};
*/