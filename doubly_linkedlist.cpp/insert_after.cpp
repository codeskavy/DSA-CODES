#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};

void insertafter(Node* prev_node,int new_data){

    if(prev_node==NULL){
        cout<<"the given prev node cant be null";
        return;
    }

    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    new_node->prev=prev_node;

    if(new_node->next!=NULL){
        //changes previous of new nodes next node

        new_node->next->prev=new_node;
    }
}
