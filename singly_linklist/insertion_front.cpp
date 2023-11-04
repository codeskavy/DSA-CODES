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
    //paramterized constructor
    Node(int data){
        this->data=data;
        this->next=next;
    }
};
void push(Node** head,int new_data){

    Node* new_node=new Node();

    new_node->data=new_data;

    new_node->next=(*head);

    (*head)=new_node;
}

//time complexity -O(1)
//space complexity- O(1)