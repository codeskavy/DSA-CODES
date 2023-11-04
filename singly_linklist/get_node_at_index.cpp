#include<assert.h>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int Get(Node*head,int index){
    Node*current=head;
    int count=0;
    while(current!=NULL){
        if(count==index)
            return (current->data);
        count++;
        current=current->next;
        assert(0);
    }
}
// Time Complexity: O(n)
// Auxiliary Space: O(1) space created for variables