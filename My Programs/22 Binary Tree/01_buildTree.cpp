#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left)
                q.push(temp -> left);
            
            if(temp -> right)
                q.push(temp -> right);
        }
    }
}

int main(){
    Node* root = NULL;
    root = buildTree(root); //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << endl << endl << "Level Order Traversal is: " << endl;
    levelOrderTraversal(root);
    return 0;
}