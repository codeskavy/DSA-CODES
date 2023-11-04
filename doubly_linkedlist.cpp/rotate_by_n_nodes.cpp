#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
    }

};

void rotate(Node* &head,int pos){
    if(pos==0)
    return;

    //finding last node
    Node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    //making the list circular.
    temp->next=head;
    head->prev=temp;

    int count=1;
    while(count<=pos){
        head=head->next;
        temp=temp->next;
        count++;
    }
    //making the list un-circular again
    temp->next=NULL;
    head->prev=NULL;

}