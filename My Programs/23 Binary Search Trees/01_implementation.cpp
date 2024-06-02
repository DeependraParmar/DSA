#include <iostream>
#include <queue> // Add missing include directive for the <queue> library
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};
Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root -> data){
        root -> right = insertIntoBST(root -> right, data);
    }
    else{
        root -> left = insertIntoBST(root -> left, data);
    }

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

void takeInput(Node** root){ // Change the parameter to a double pointer
    int data;
    cout << "Enter the data stream ( -1 to exit ): ";
    cin >> data;

    while(data != -1){
        *root = insertIntoBST(*root, data); // Dereference the root pointer to update the root node
        cin >> data;
    }
}
void inOrder(Node* root){
    if(root == NULL)
        return;
    
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

void preOrder(Node* root){
    if(root == NULL)
        return;
    
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(Node* root){
    if(root == NULL)
        return;
    
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}

Node* min(Node* root){
    Node* temp = root;

    while(temp -> left != NULL){
        temp = temp -> left;
    }

    return temp;
}
int main(){
    Node* root = NULL;
    takeInput(&root); // Pass the address of the root node

    cout << "Level Order Traversal of BST: " << endl;
    levelOrderTraversal(root);

    cout << endl << "Inorder Traversal of BST is: ";
    inOrder(root);
    
    cout << endl << "PreOrder Traversal of BST is: ";
    preOrder(root);
    
    cout << endl << "PostOrder Traversal of BST is: ";
    postOrder(root);

    cout << endl << "Node with min. value is: " << min(root)->data << endl;
    
    return 0;
}