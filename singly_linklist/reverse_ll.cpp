#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data):data(data),next(nullptr){}

};

class linkedlist{
    public:
        Node* head;
        linkedlist():head(nullptr){}

        void insert(int data){
            Node* newnode=new Node(data);
            newnode->next=head;
            head=newnode;
        }

        void reverse(){
            Node* prev=nullptr;//pointing to a nullptr
            Node* current=head;//pointing to the head of the node
            Node* nextnode=nullptr;//pointing to a nullptr

            while(current!=nullptr){
                //nectnode now ponts to the next of current
                nextnode=current->next;
                //we break the linkage of current and sets it to prev
                current->next=prev;
                //now prev shifts forwrad by one
                prev=current;
                //now current shifts forward by one
                current=nextnode;
            }


            head=prev;
        }
};