/*
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root == NULL)
        return false;

    if(x == root -> data)
        return true;
    if(x > root -> data)
        return searchInBST(root -> right, x);
    if(x < root -> data)
        return searchInBST(root -> left, x);
}
*/