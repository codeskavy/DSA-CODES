#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;
};

void deleteNode(Node** head,Node* del){
    //base case
    if(*head==NULL || del==NULL)
        return;
    //if the node to be deleted is head node
    if(*head==del)
        *head=del->next;
        //change next only if node
        // to be deleted is not the last node
    if(del->next!=NULL){
        del->next->prev=del->prev;
    }
    //change prev only if node 
    //to be deleted is not the first node
    if (del->prev!=NULL)
        del->prev->next=del->next;

    free(del);
    return;
}