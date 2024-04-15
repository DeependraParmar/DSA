/*
class Solution {
private:
void insertAtTail(ListNode* &head, ListNode* &tail, int data){
    ListNode* newnode = new ListNode(data);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail -> next = newnode;
        tail = newnode;
    }
}
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int carry = 0, sum = 0, digit = 0;

        while(temp1 != NULL || temp2 != NULL || carry != 0){
            int value1 = 0, value2 = 0;
            if(temp1)
                value1 = temp1 -> val;
            if(temp2)
                value2 = temp2 -> val;

            sum = value1 + value2 + carry;
            digit = sum%10;
            insertAtTail(head, tail, digit);

            carry = sum/10;

            if(temp1)
                temp1 = temp1 -> next;
            if(temp2)
                temp2 = temp2 -> next;
        }

        return head;
    }
}; 
*/