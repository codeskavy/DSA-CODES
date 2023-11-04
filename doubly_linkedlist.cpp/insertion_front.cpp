#include<iostream>
using namespace std;
// A doubly linked list (DLL) is a special type of linked list 
//in which each node contains a pointer to the previous node as well 
//as the next node of the linked list.

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};

void push(Node** head,int new_data){
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head);
    new_node->prev=NULL;

    if((*head)!=NULL)
        (*head)->prev=new_node;
    (*head)=new_node;
}