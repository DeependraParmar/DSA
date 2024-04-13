/*
class Solution{
    private:
    Node* reverseLinkedList(Node* head){
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(current != NULL){
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

    void insertAtTail(Node* &head, Node* &tail, int val){
        Node* temp = new Node(val);

        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }

    Node* add(Node* first, Node* second){
        int carry = 0;
        int sum = 0;
        int digit = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;

        while(first != NULL && second != NULL){
            sum = carry + first->data + second->data;
            digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            first = first -> next;
            second = second -> next;
        }

        while(first != NULL){
            sum = carry + first->data;
            digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            first = first -> next;
        }

        while(second != NULL){
            sum = carry + second -> data;
            digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
            second = second -> next;
        }
        while(carry != 0){
            sum = carry;
            digit = sum%10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;
        }

        return ansHead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2){

        // step 01: reversing the linked list
        Node* first = reverseLinkedList(num1);
        Node* second = reverseLinkedList(num2);

        // step 02: start adding them
        Node* ans = add(first, second);

        // step 03: reversing the ans linked list

        ans = reverseLinkedList(ans);

        while(ans -> data == 0 && ans->next != NULL){
            ans = ans -> next;
        }

        return ans;
    }
};
*/