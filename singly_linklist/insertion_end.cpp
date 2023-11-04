#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=next;
    }
};

void append(Node** head,int new_data){
    Node* new_node= new Node();
    Node* last=*head;
    new_node->data=new_data;
    new_node->next=NULL;

    if(*head==NULL){
        *head=new_node;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new_node;
    return;
}

//time complexity-O(N)
//space complexity-O(1)