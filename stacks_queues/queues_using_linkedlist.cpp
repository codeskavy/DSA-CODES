#include<iostream>
using namespace std;

class QNode{
    public:
    int data;
    QNode* next;

    QNode(int d){
        this->data=d;
        this->next=nullptr;
    }
    
};

class queue{
    private:
        QNode *front,*rear;

    public:
    queue(){
        front=rear=nullptr;
    }

    void enqueue(int x){
        QNode* temp=new QNode(x);
        if(rear==nullptr)
            front=rear=temp;
            return;

        rear->next=temp;
        rear=temp;
    }


    void dequeue(){
        if(front==nullptr)
            return;
        QNode* temp=front;
        front=front->next;

        delete temp;

    }

    void display()
    {
        if(isEmpty()){
            cout<<"Queue is empty";
        }
        else{
            cout<<front->data;
            cout<<rear->,data;
        }
    }

    bool isEmpty() const {
        return front == nullptr;
    }


};
int main() {
    queue q;

    // enqueue elements
    q.enqueue(10);
    q.enqueue(20);

    // Dequeue elements
    q.dequeue();
    q.dequeue();

    // enqueue more elements
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Dequeue an element
    q.dequeue();

    // Display the front and rear of the queue
    q.display();

    return 0;
}