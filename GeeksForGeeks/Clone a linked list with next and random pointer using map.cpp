/*
class Solution{
    private:
    void createClonedList(Node* &head, Node* &tail, Node* originalHead, map<Node*, Node*> &mapping){
        Node* temp = originalHead;

        while(temp != NULL){
            Node* newnode = new Node(temp -> data);
            mapping[temp] = newnode;

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
        map<Node*, Node*> mapping;

        // step 01: creating a cloned list with map ready to be used
        createClonedList(clonedHead, clonedTail, head, mapping);

        // step 02: point the clonedNode's arb to corresponding mapping
        Node* originalTemp = head;
        Node* clonedTemp = clonedHead;

        while(originalTemp != NULL){
            clonedTemp -> arb = mapping[originalTemp -> arb];
            originalTemp = originalTemp -> next;
            clonedTemp = clonedTemp -> next;
        }

        return clonedHead;
    }

};
*/