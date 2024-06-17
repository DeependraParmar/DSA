/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie();

        ListNode *slow = head, *fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return slow;
    }
};
*/
