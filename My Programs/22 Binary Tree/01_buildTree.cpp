#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};
Node* buildTree(Node* root){
    int data;
    cout << "Enter the data for the root Node: ";
    cin >> data;

    root = new Node(data);

    if(data == -1)
        return NULL;
    
    cout << endl;
    cout << "Enter the data for left child of " << data << ": "<< endl;
    root -> left = buildTree(root -> left);

    cout << endl;
    cout << "Enter the data for right child of " << data << ": " << endl;
    root -> right = buildTree(root -> right);

    return root;
}
int main(){
    Node* root = NULL;
    root = buildTree(root);

    return 0;
}