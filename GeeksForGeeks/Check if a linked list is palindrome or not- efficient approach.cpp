/*
class Solution{
  private:
    Node* getMiddleNode(Node* head){
        Node* slow = head;
        Node* fast = head -> next;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        return slow;
    }
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
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head -> next == NULL)
            return true;

        // step 01: find the middle of the list
        Node* middle = getMiddleNode(head);

        // step 02: reverse the second half
        Node* temp = middle -> next;
        middle -> next = reverseLinkedList(temp);

        // step 03: compare the elements from 1st and 2nd halves
        Node* head1 = head;
        Node* head2 = middle -> next;

        while(head2 != NULL){
            if(head1 -> data != head2 -> data)
                return false;

            head1 = head1 -> next;
            head2 = head2 -> next;
        }

        // step 04: making the list intact
        temp = middle -> next;
        middle -> next = reverseLinkedList(temp);

        return true;
    }
};
*/