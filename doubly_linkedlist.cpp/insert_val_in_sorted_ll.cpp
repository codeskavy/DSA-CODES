#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    Node* prev;

};

//function to insert a nwe node 
//in doubly linked list in a sorted way
void sorted(Node** head,Node* newnode){
    Node* current;

    if(*head==NULL)
    *head=newnode;

    else if((*head)->data>=newnode->data){
        newnode->next=*head;
        newnode->next->prev=newnode;
        *head=newnode;
    }
    else{
        current=*head;
        while(current->next!=NULL && current->next->data)
            current=current->next;
        newnode->next=current->next;

        if(current->next!=NULL)
            newnode->next->prev=newnode;
        current->next=newnode;
        newnode->prev=current;
    }
}