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
void insertafter(Node* prev_node,int new_data){
    if(prev_node==NULL){
        cout<<"the given previous node can't be null";
        return;
    }

    Node* new_node= new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}
//time complexity -O(1)
//space complexity- O(1)