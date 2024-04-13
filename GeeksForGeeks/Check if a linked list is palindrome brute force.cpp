/*
#include <vector>

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        vector<int> arr;
        Node* temp = head;

        while(temp != NULL){
            arr.push_back(temp -> data);
            temp = temp -> next;
        }

        int start = 0;
        int end = arr.size()-1;

        while(start <= end){
            if(arr[start++] != arr[end--])
                return false;
        }

        return true;
    }
};
*/