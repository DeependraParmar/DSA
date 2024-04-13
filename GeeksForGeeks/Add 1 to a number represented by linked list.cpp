/*
class Solution{
    private:
    Node* reverse(Node* head){
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
    void insertAtTail(Node* &head, Node* &tail, int data){
        Node* temp = new Node(data);

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    Node* add(Node* head){
        int sum = 0, carry = 0, digit = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        bool isAdded = false;

        while(head != NULL || carry != 0){
            int value = 0;
            if(head != NULL)
                value = head -> data;


            if(!isAdded){
                sum = carry + value + 1;
                isAdded = true;
            }
            else{
                sum = carry + value;
            }

            digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum/10;

            if(head != NULL)
                head = head -> next;
        }

        return ansHead;
    }

    public:
    Node* addOne(Node *head){
        // step 01: finding reverse of the list
        Node* revHead = reverse(head);

        Node* ans = add(revHead);

        ans = reverse(ans);

        while(ans->data == 0 && ans->next != NULL)
            ans = ans -> next;

        return ans;
    }
};
*/