/*
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int> * temp = root;

    while(temp != NULL){
        if(x == temp -> data)
            return true;
        if( x > temp -> data)
            temp = temp -> right;
        else
            temp = temp -> left;
    }
    return false;
}
*/