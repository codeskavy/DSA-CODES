#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};

void insertbefore(Node* next_node,int new_data,Node* head){
    if(next_node==NULL){
       cout<<"the given node can't be null"<<endl;
       return; 
    }
    Node* new_node = new Node();


    new_node->data = new_data;
 
    new_node->prev = next_node->prev;
 
    next_node->prev = new_node;
 
    new_node->next = next_node;
 
    if (new_node->prev != NULL)
        new_node->prev->next = new_node;
    else
        head = new_node;

} 
int main(){
    Node* head;
}