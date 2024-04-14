/*
class Solution{
    private:
    void createClonedList(Node* &head, Node* &tail, Node* originalHead){
        Node* temp = originalHead;

        while(temp != NULL){
            Node* newnode = new Node(temp -> data);

            if(head == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail -> next = newnode;
                tail = newnode;
            }

            temp = temp -> next;
        }
    }

    public:
    Node *copyList(Node *head){
        Node* clonedHead = NULL;
        Node* clonedTail = NULL;

        // step 01: creating a cloned list with map ready to be used
        createClonedList(clonedHead, clonedTail, head);

        // step 02: create the real links between original and cloned list nodes.
        Node* temp = head;
        Node* clonedTemp = clonedHead;
        Node* next = NULL;

        while(temp != NULL && clonedTemp != NULL){
            next = temp -> next;
            temp -> next = clonedTemp;
            temp = next;
            next = clonedTemp -> next;
            clonedTemp -> next = temp;
            clonedTemp = next;
        }

        // step 03: copy the random pointers
        temp = head;

        while(temp != NULL){
            if(temp -> next != NULL){
                temp -> next -> arb = temp -> arb ? temp -> arb -> next : NULL;
            }

            temp = temp -> next -> next;
        }


        // steo 04: reverting the link connections b/w both lists
        temp = head;
        clonedTemp = clonedHead;

        while(temp != NULL && clonedTemp != NULL){
            temp -> next = clonedTemp -> next;
            temp = temp -> next;

            if(temp != NULL){
                clonedTemp -> next = temp -> next;
            }
            clonedTemp = clonedTemp -> next;
        }

        return clonedHead;
    }

};
*/