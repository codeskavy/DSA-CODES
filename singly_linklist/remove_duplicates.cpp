#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
};

Node* newNode(int data){
    Node* temp=new Node;
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void removeDuplicates(Node* start){
    Node *ptr1,*ptr2,*dup;
    ptr1=start;

    while(ptr1!=NULL && ptr1->next=NULL){
        ptr2=ptr1;

        while(ptr2->next!=NULL){
            if(ptr1->data== ptr2->next->data){
                dup=ptr2->next;
                ptr2->next=ptr2->next->next;
                delete(dup);
            }
            else{
                ptr2=ptr2->next;
            }
        ptr1=ptr1->next;
        }
    }
}