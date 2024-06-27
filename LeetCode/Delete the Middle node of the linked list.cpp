/*
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(head -> next == NULL)
            return NULL;

        ListNode* temp = head;
        int length = 0;

        while(temp){
            temp = temp -> next;
            length++;
        }

        int position = length / 2;
        temp = head;

        for(int i=0; i<position-1; i++)
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