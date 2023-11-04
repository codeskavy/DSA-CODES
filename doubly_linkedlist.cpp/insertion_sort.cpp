#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    Node* prev;

};

void sortedInsert(struct Node** head_ref, struct Node* newNode)
{
    struct Node* current;
 
    // if list is empty
    if (*head_ref == NULL)
        *head_ref = newNode;
 
    // if the node is to be inserted at the beginning
    // of the doubly linked list
    else if ((*head_ref)->data >= newNode->data) {
        newNode->next = *head_ref;
        newNode->next->prev = newNode;
        *head_ref = newNode;
    }
 
    else {
        current = *head_ref;
 
        // locate the node after which the new node
        // is to be inserted
        while (current->next != NULL && 
               current->next->data < newNode->data)
            current = current->next;
 
        /*Make the appropriate links */
 
        newNode->next = current->next;
 
        // if the new node is not inserted
        // at the end of the list
        if (current->next != NULL)
            newNode->next->prev = newNode;
 
        current->next = newNode;
        newNode->prev = current;
    }
}

void insertionsort(Node** head){
    Node* sorted=NULL;
    Node* current=*head;
    while(current!=NULL){
        Node* next=current->next;
        current->prev=current->next=NULL;
        sortedInsert(&sorted,current);
        current=next;
    }
    *head=sorted;
}