#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
void pairsum(Node *head,int x){
    Node *first=head;
    Node *second=head;
    while(second->next!=NULL)
        second=second->next;

    bool found=false;
    while(first!=second && second->next!=first){
        if((first->data +second->data)==x){

            found=true;
            cout<<first->data<<","<<second->data<<endl;
            first=first->next;
            second=second->prev;
        }
        else{

            if((first->data+second->data)<x)
                first=first->next;
            else{
                second=second->prev;
            }

        }

        if(found==false){
            cout<<"no pair found";
        }
}
}