/*
class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        Node* head = NULL;
        Node* tail = NULL;

        for(int i=0; i<arr.size(); i++){
            Node* newnode = new Node(arr[i]);

            if(head == NULL && tail == NULL){
                head = newnode;
                tail = newnode;
            }
            else{
                tail -> next = newnode;
                newnode -> prev = tail;
                tail = newnode;
            }
        }

        return head;
    }
};
*/