/*
Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}
Node* merge(Node* head1, Node* head2){
    if(head1 == NULL)
        return head2;
    if(head2 == NULL)
        return head1;

    Node* ans = new Node(-1);
    Node* temp = ans;

    while(head1 != NULL && head2 != NULL){
        if(head1 -> data < head2 -> data){
            temp -> next = head1;
            temp = head1;
            head1 = head1 -> next;
        }
        else{
            temp -> next = head2;
            temp = head2;
            head2 = head2 -> next;
        }
    }

    while(head1 != NULL){
        temp -> next = head1;
        temp = head1;
        head1 = head1 -> next;
    }

    while(head2 != NULL){
        temp -> next = head2;
        temp = head2;
        head2 = head2 -> next;
    }

    ans = ans -> next;
    return ans;
}
Node *sortLL(Node *head){
    // base case
    if(head == NULL || head -> next == NULL)
        return head;

    // breaking lists into two halves.
    Node* mid = getMid(head);
    Node* leftHead = head;
    Node* rightHead = mid -> next;
    mid -> next = NULL;

    // sorting the list using recursion
    leftHead = sortLL(leftHead);
    rightHead = sortLL(rightHead);

    // merge two sorted linked list
    Node* ans = merge(leftHead, rightHead);


    return ans;
}
*/