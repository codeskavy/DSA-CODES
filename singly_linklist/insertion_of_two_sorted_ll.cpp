#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head,int new_data);
Node* insertion(Node* a ,Node* b){
    Node* dummy;
    Node* tail=dummy;
    dummy->next=NULL;

    while(a!=NULL && b!=NULL){
        if(a->data==b->data){
            push(&tail->next,a->data);
            tail-tail->next;
            a=a->next;
            b=b->next;
        }

        else if(a->data<b->data)
            a=a->next;

        else
            b=b->next;
    }
    return (dummy->next);
}

void push(Node** head,int new_data){
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;
}