#include<iostream>
#include<vector>
using namespace std;
class Node{

    public:
    int data;
    Node* next;

    Node(int value): data(value),next(nullptr){}

    static Node* pushNode(Node* head,int data_val){
        Node* new_node=new Node(data_val);
        //creating a new node assigning val as well.
        new_node->next=head;
        return new_node;
    }
    int findmiddleval(Node* head){
        vector<int> values;
        while(head!=nullptr){
            values.push_back(head->data);
            head=head->next;
        }

        if(values.empty()){
            cout<<"the linked list is empty"<<endl;
            return -1;

        }
        return values[values.size()/2];
    }
};