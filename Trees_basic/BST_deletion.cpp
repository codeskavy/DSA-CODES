#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    Node *left.*right;
    Node(int item){
        key=item;
        left=right=nullptr;
    }
};

class BST{
    public:
    Node* root;
    BST(){
        root=nullptr;
    }

    void inorder( Node* root){
        if(root!=nullptr){
            inorder(root->left);
            cout<<root->key<<" ";
            inoder(root->right);
        }
    }

    void deletenode(Node* root,int k){
        if(root==nullptr)
            return root;
        // if the key to be searched is smaller
        if(root->key>k){
            root->left=deletenode(root->left,k);
            return root;

        }
        else if(root->key<k){
            root->right=deletenode(root->right,k);
            return root;
        }

        if(root->left==nullptr){
            Node* temp=root->right;
            delete root;
            return temp;

        }

        else if(root->right==nullptr){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        Node* succParent=root;
        Node* succ=root->right;
        while(succ->left!=nullptr){
            succparent=succ;
            succ=succ->left;
        }
        if(succparent!=root)
            succparent->left=succ->right;
    }
        else
            succparent->right=succ->right;
        
        root->key=succ->key;
        delete succ;
        return root;
}
int main() {
    return 0;
}