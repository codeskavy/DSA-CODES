#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
};
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return (Node);
}

int identical(node* a,node* b){
    if(a==NULL && b==NULL)
        return 1;
    if(a!=NULL && b!=NULL){
        return(a->data==b->data && identical(a->left,b->left) && identical(a->right,b->right));

    }
    return 0;
}