/*
class Solution{
    public:
    int height(Node* root){
        if(root == NULL)
            return 0;

        int left = height(root -> left);
        int right = height(root -> right);

        int ans = max(left, right) + 1;
        return ans;
    }
    bool isBalanced(Node *root)
    {
        if(root == NULL)
            return true;

        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);

        bool difference = abs(height(root -> left) - height(root -> right)) <= 1;

        if(left && right && difference)
            return true;
        else
            return false;
    }
};
*/