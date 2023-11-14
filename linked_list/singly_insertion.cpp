#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void insertatfront(Node** head,int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=(*head);
    (*head)=new_node;
}

void insertatend(Node** head,int data){
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=NULL;
}

void insertafter(Node* prev_node,int new_data){
    if(prev_node==NULL)
        cout<<"prev node cant be null";
        return;
    
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
int main() {
    return 0;
}