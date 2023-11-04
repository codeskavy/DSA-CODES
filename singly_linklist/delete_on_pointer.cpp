#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};

void deleteNode(Node* node){
    Node* prev;
    if(node==NULL){
        return;
    }
    else{
        Node*temp=node->next;
        node->data=temp->data;
        node->next=temp->next;
        temp=NULL;
    }
}
//time complexity-O(n)
//space complexity-O(1)