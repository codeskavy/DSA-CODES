#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
};

void insertatbeginning(int value){
    Node* new_node=new Node(value);
    if(!head){
        head=tail=new_node;
    }
    else{
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }
}

void insertionatend(int value){
    Node* new_node=new Node(value);
    if(!head){
        head=tail=new_node;
    }

    else{
        new_node->prev=tail;
        tail->next=new_node;
        tail=new_node;
    }
}

void insertafternode(Node* prevnode,int value){
    if(!prevnode){
        cout<<"prev node is nullptr";
        return;
    }

    Node* new_node=new Node(value);
    new_node->prev=prevnode;
    new_node->next=prevnode->next;
    if(prevnode->next){
        prevnode->next->prev=newnode;
    }
    prevnode->next=new_node;
}

void display(){
    Node* current=head;
    while(current){
        cout<<current->data<<" ";
        current=current->next;
    }
    
    cout<<endl;
}
int main() {
    return 0;
}