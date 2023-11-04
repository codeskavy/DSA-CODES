#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

};

void printN(Node* head,int N){

    int len=0,i;
    Node*temp=head;

    while(temp!=NULL){
        temp=temp->next;
        len++;
        }

        if(len<N)
         return;
        
        temp=head;
        for(i=1;i<len-N+1;i++)
            temp=temp->next;
        cout<<temp->data;

        return;
}

//time complexity=O(n)
//space complexity-O(1)