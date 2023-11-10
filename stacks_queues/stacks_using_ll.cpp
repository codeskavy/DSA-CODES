#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int n){
            this->data=n;
            this->next=NULL;
        }
};

class stack{
    Node* top;

    public:
    //constructor
    stack(){
        top=NULL;
    }
    //in push we create a memory, push data into it and then points it to top, and then change the top to temp.
    void push(int data){
        //new memory
        Node* temp=new Node(data);
        if(!temp){
            cout<<"Stack overflow";
            exit(1);
        }

        temp->data=data;
        temp->next=top;
        top=temp;
    }

    bool isempty(){
        return top==NULL;
    }

    int peek(){
        if(!isempty()){
            return top->data;
        }

        else{
            exit(1);
        }
    }
//in pop, we assign a memory to temp, we change temp to top,points top to next position and then we free the memory of temp.
    void pop(){
        Node* temp;

        if(top==NULL){
            cout<<"stack underflow"<<endl;
            exit(1);
        }

        else{

            temp=top;
            top=top->next;
            free(temp);
        }
    }

    void display(){
        Node* temp;
        if(top==NULL){
            cout<<"stack underflow";
            exit(1);
        }
        else{
            temp=top;
            while(temp!=NULL){
                cout<<temp->data;
                temp=temp->next;
                if(temp!=NULL){
                    cout<<"->";
                }
            }
        }
    }

};
int main() {
    return 0;
}