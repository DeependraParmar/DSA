/*
class Solution
{
    public:
    void insertAtTail(Node* &tail, Node* &temp){
        tail -> next = temp;
        tail = temp;
        return;
    }
    Node* segregate(Node *head) {

        if(head == NULL || head -> next == NULL)
            return head;

        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        Node* temp = head;

        while(temp != NULL){
            int value = temp -> data;

            if(value == 0){
                insertAtTail(zeroTail, temp);
            }
            else if(value == 1){
                insertAtTail(oneTail, temp);
            }
            else{
                insertAtTail(twoTail, temp);
            }

            temp = temp -> next;
        }

        if(oneHead -> next != NULL){
            zeroTail -> next = oneHead -> next;
        }
        else{
            zeroTail -> next = twoHead -> next;
        }

        oneTail -> next = twoHead -> next;
        twoTail -> next = NULL;
        head = zeroHead -> next;

        delete zeroHead, zeroTail, oneHead, oneTail, twoHead, twoTail;

        return head;
    }
};
*/