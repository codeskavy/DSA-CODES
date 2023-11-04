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
int maxdepth(node* node){
    if(node==NULL)
        return 0;
    else{
        int ldepth=maxdepth(node->left);
        int rdepth=maxdepth(node->right);

        if(ldepth>rdepth)
            return (ldepth+1);
        else
            return(rdepth+1);
    }
}