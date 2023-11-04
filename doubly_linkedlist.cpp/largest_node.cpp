#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

int largest(Node** head){

    Node *max,*temp;
    temp=max=*head;
    while(temp!=NULL){

        if(temp->data>max->data)
            max=temp;
        temp=temp->next;
    }
    return max->data;

}