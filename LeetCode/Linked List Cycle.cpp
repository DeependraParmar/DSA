/*
class Solution {
public:
    bool hasCycle(ListNode* head) {
        map<ListNode*, bool> mapping;

        if (head == NULL || head -> next == NULL)
            return false;

        ListNode* temp = head;

        while (temp != NULL) {
            if (mapping[temp] == true)
                return true;
            mapping[temp] = true;

            temp = temp -> next;
        }

        return false;
    }
};
*/