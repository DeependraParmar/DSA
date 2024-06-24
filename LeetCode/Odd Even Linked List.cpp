/*
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return NULL;

        vector<int> arr;
        ListNode* temp = head;

        while(temp && temp -> next){
            arr.push_back(temp -> val);
            temp = temp -> next -> next;
        }
        if(temp)
            arr.push_back(temp -> val);

        temp = head -> next;
        while(temp && temp -> next){
            arr.push_back(temp -> val);
            temp = temp -> next -> next;
        }
        if(temp)
            arr.push_back(temp -> val);

        temp = head;

        for(int i=0; i<arr.size(); i++){
            temp -> val = arr[i];
            temp = temp -> next;
        }

        return head;
    }
};
*/