#include<iostream>
using namespace std;
class Node{
    int data;
    Node* next;
};
void insertatbeginning(int value){
    Node* new_node=new Node(value);
    if(!head){
        head=newnode;
        head->next=head;
    }

    else{
        new_node->next=head;
        Node*temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=new_node;
        head=newnode;
    }

}


void insertatend(int value){
    Node# newnode=new Node(value);
    if(!head){
        head=newnode;
        head->next=head;
    }
    else{
        Node*temp=head;
        while(temp->next!=head)
            temp=temp->next;
        temp->next=newnode;
        newnode->next=head;
    }
}


void insertafternode(int afterval,int value){
    Node*newnode=new Node(value);
    if(!head){
        cout<<"list is empty";
        return;
    }
    
    Node* temp=head;
    do{
        if(temp->data==aftervalue){
            newnode->next=temp->next;
            temp->next=newnode;
            return;
        }
        temp=temp->next;

    }while(temp!=head);

    }

void display(){
    if(!head){
        cout<<"list is empty";
        return;
    }

    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main() {
    Node* head;
    return 0;
}