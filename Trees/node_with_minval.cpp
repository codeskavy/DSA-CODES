#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};
//function to define a new node
struct node* newnode(int data){
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return(node);
}

struct node*insert(struct node*node,int data){
    if(node==NULL)
        return (newnode(data));

    else{
        if(data<=node->data)
            node->left=insert(node->left,data);
        else
            node->right=insert(node->right,data);    
    }
int minval(struct node* node){
    struct node* current=node;
    while(current->left!=NULL){
        current=current->next;
    }
    return (current->data);
}
}