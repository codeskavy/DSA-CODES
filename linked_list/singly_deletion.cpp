#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;

};

void deletefrombeginning(){
    if(!head)
        cout<<"the linked list is empty";

    Node* temp=head;
    head=head->next;
    delete temp;

}

void deletefromend(){
    if(!head)
        cout<<"the linked list is empty";
        return;

    if(!head->next){
        delete head;
        head=nullptr;
        return;
    }

    Node*temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

}

void deletefromposition(int position){
    if(!head)
        cout<<"the linked list is empty";
        return;

    if(position==0){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
//pointer just before the targetted position
    Node* temp=head;
    for(int i=0;temp!=nullptr && i<position-1;i++){
        temp=temp->next;
    }

    if(temp==nullptr||temp->next==nullptr){
        cout<<"invalid position";
        return;
    }
    Node* node=temp->next;
    temp->next=temp->next->next;
    delete node;
}
int main() {
    return 0;
}