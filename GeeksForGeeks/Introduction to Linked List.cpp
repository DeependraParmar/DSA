/*
class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
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
                tail = newnode;
            }
        }

        return head;
    }
};
*/