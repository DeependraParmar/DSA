/*
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        vector<int> values;
        int sum = 0;

        for (ListNode *temp = head->next; temp != NULL; temp = temp->next)
        {
            int nodeValue = temp->val;
            sum += nodeValue;

            if (nodeValue == 0)
            {
                values.push_back(sum);
                sum = 0;
                continue;
            }
        }

        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;

        for (int i = 0; i < values.size(); i++)
        {
            ListNode *newnode = new ListNode(values[i]);
            if (ansHead == NULL)
            {
                ansHead = newnode;
                ansTail = newnode;
            }
            else
            {
                ansTail->next = newnode;
                ansTail = newnode;
            }
        }

        return ansHead;
    }
};
*/