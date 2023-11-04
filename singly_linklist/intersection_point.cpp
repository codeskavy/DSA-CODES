#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* getintersection(Node* head1,Node*head2){
    while(head2){
        Node* temp=head1;
        while(temp){
            if(temp==head2)
            return head2;
            temp=temp->next;
        }
        head2=head2->next;
    }
    return NULL;
}
int main(){


}