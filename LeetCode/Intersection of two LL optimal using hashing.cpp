/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(headA == NULL || headB == NULL)
            return NULL;

        unordered_set<ListNode*> mapping;

        while(headA){
            mapping.insert(headA);
            headA = headA -> next;
        }

        while(headB){
            if(mapping.find(headB) != mapping.end())
                return headB;

            headB = headB -> next;
        }

        return NULL;
    }
};
*/