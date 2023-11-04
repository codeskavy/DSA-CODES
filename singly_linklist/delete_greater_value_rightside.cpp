#include<bits/stdc++.h>
using namespace std;
struct Node{

    int data;
    struct Node* next;
};

void reverselist(struct Node** head);
void del(struct Node* head);

void del(struct Node** head){

    reverselist(head);
    del(*head);
    reverselist(head);
}

void del(struct Node* head){
    struct Node* current=head;
    struct Node* maxnode=head;
    struct Node* temp;

    while(current!=NULL && current->next!=NULL){
        if(current->next->data<maxnode->data){
            temp=current->next;
            current->next=temp->next;
            free(temp);
        }

        else{
            current=current->next;
            maxnode=current;
        }
    }
}
