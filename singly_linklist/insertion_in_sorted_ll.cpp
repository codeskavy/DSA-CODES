#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};

void sorted(Node** head,Node* new_node){

    Node* current;
    if(*head==NULL || (*head)->data>=new_node->data){
        new_node->next=*head;
        *head=new_node;
    }
    else{

        current=*head;
        while(current->next!=NULL && current->next->data<new_node->data){
            current=current->next;
        }
        new_node->next=current->next;
        current->next=new_node;
    }
}
//time complexity-O(n)
//space complexity-O(1)