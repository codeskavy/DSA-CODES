#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};
void append(Node** head,int new_data){
    Node* new_node=new Node();
    Node* last=*head;
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head==NULL){
        new_node->prev=NULL;
        *head=new_node;
        return;
    }

    while(last->next!=NULL){
        last=last->next;

    }
    last->next=new_node;
    new_node->prev=last;
}