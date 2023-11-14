#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void deletefrombeginning(Node*head){
    if(!head){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp=head;
    while(temp->next!=head)
        temp=temp->next;
    if(head==temp){
        delete head;
        head=nullptr;
    } 
    else{
        temp->next=head->next;
        delete head;
        head=temp->next;

    }
       
}

void deletefromend(Node* head){
    if(!head)
        cout<<"list is empty";
        return;
}

Node* temp=head;
Node* prev=nullptr;

while(temp->next!=head){
    prev=temp;
    temp=temp->next;
}
if(head==temp){
    delete head;
    head=nullptr;
}
else{
    prev->next=head;
    delete temp;

}

void deletefromposition(int position,Node* head){
    if (!head) {
            cout << "List is empty. Cannot delete from position." << endl;
            return;
        }

        if (position == 0) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        int currentPos = 0;

        do {
            if (currentPos == position) {
                prev->next = temp->next;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
            currentPos++;
        } while (temp != head);

        cout << "Invalid position. Cannot delete from position." << endl;
    }

int main() {
    Node* head;
    return 0;
}