/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(headA == NULL || headB == NULL)
            return NULL;

        ListNode* temp1 = headA;

        while(temp1){
            ListNode* temp2 = headB;
            while(temp2){
                if(temp1 == temp2)
                    return temp1;
                    temp2 = temp2 -> next;
            }

            temp1 = temp1 -> next;
        }

        return NULL;
    }
};
*/