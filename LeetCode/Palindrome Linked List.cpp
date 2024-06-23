/*
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;

        stack<int> stk;
        ListNode *temp = head;

        while (temp != NULL)
        {
            stk.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while (!stk.empty())
        {
            if (temp->val != stk.top())
                return false;

            stk.pop();
            temp = temp->next;
        }

        return true;
    }
};
*/