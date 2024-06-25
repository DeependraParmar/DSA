/*
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(head == NULL)
            return NULL;

        ListNode* odd = head;
        ListNode* even = head -> next;
        ListNode* evenHead = head -> next;

        while(even && even -> next){
            odd -> next = odd -> next -> next;
            even -> next = even -> next -> next;

            odd = odd -> next;
            even = even -> next;
        }

        odd -> next = evenHead;
        return head;
    }
};
*/