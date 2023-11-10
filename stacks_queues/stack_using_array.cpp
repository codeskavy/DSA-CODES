#include<iostream>
using namespace std;

class Stack{
    private:
    static const int max_size=100;
    int arr[max_size];
    int top;

    public:
    //constructor
    Stack():top(-1){}

    void push(int value){
        if(top>=max_size-1){
            cout<<"stack overflow";
            return;
        }
        arr[++top]=value;
        cout<<value<<"pushed into stack";
    }

    void pop(){
        if(top<0){
            cout<<"stack underflow";
            return;
        }
        //top will bet popped.
        cout<<arr[top--]<<"popped from stack"<<endl;
    }

    int peek(){
        if(top>=0){
            return top;
        }
    }

    bool isEmpty(){
        return top<0;
    }
};
int main() {
    return 0;
}