/*
class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node* tail = NULL;
        Node* temp = head;
        vector<pair<int,int>> ans;

        while(temp -> next != NULL){
            temp = temp -> next;
        }

        tail = temp;

        while(head -> data < tail -> data){
            int hData = head -> data;
            int tData = tail -> data;
            int sum = hData + tData;

            if(sum < target)
                head = head -> next;
            else if(sum == target){
                ans.push_back({hData, tData});
                head -> data = -1;
                tail -> data = -1;
                head = head -> next;
                tail = tail -> prev;
            }
            else
                tail = tail -> prev;
        }

        return ans;
    }
};
*/