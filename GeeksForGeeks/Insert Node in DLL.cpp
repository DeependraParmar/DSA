/*
void addNode(Node *head, int pos, int data)
{
   Node* newnode = new Node(data);

        Node* temp = head;

        for(int i=0; i<pos; i++)
            temp = temp -> next;

        if(temp -> next == NULL){
            temp -> next = newnode;
            newnode -> prev = temp;
            newnode -> next = NULL;
        }
        else{
            newnode -> next = temp -> next;
            newnode -> prev = temp;
            temp -> next -> prev = newnode;
            temp -> next = newnode;
        }

}
*/