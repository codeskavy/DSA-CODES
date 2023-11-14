#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void traversal(Node* head){
    if(head==NULL){
        return;
    }
    else{
        cout<<head->data<<" ";
        traversal(head->next);
    }
}
int main() {
    Node* head = new Node();
    head->data = 5;
    head->next = NULL;

    Node* node = new Node();
    node->data = 10;
    node->next = NULL;
    head->next = node;

    Node* node1 = new Node();
    node1->data = 15;
    node1->next = NULL;
    head->next->next = node1;

    Node* node2 = new Node();
    node2->data = 20;
    node2->next = NULL;
    head->next->next->next = node2;

    cout << "Linked List: ";
    traversal(head);

    return 0;
}