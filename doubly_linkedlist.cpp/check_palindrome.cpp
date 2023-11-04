#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    Node* prev;

};

bool ispalindrome(Node* left){
    if(left=NULL)
        return true;

    Node* right=left;
    while(right->next!=NULL)
        right=right->next;
    
    while(left!=right){
        if(left->data!=right->data)
            return false;
        
        if(left->next==right)
            break;
        left=left->next;
        right=right->prev;
    }
    return true;
}