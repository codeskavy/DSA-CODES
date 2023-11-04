#include<bits/stdc++.h>
using namespace std;
//this code is for the deletion from beg,middle and the end.
class Node{
    public:
    int index;
    Node*next;
};
void Push(Node** head,int val){
    Node* n= new Node();
    n->index=val;
    n->next=*head;
    *head=n;
    
}
void deleteN(Node** head,int pos){
    Node*temp;
    Node* prev;
    temp=*head;
    prev=*head;
    for(int i=0;i<pos;i++){
        if(i==0 && pos==1){
            *head=(*head)->next;
            free(temp);
        
        }
        //loops goes from 0 to n-1;
        else{
            if(i==pos-1 && temp){
                prev->next=temp->next;
                free(temp);
            }
            else{
                prev=temp;
                if(prev==NULL)
                    break;
                temp=temp->next;
            }
        }
    }
}
//time complexity-O(n)
//space complexity- O(1)