#include<iostream>
using namespace std;

class Queue{
    public:
        int front,rear,size;
        unsigned capacity;
        int* array;

};

//function to create a queue
Queue* createqueue(unsigned capacity){
    //memory alloacation
    Queue* queue=new Queue;
    queue->capacity=capacity;
    queue->front=queue->size=0;
    //important
    queue->rear=capacity-1;
    //dynamic memeory allocation using array.
    queue->array=new int[queue->capacity];
    return queue;
}

bool isfull(Queue* queue){
    return(queue->size==queue->capacity);
}

bool isempty(Queue* queue){
    return(queue->size==0);
}

//enequeue
void enqueue(Queue* queue,int item){
    if(isfull){
        cout<<"queue is full";
    }
    //incrementation of rear
    queue->rear=(queue->rear+1)%queue->capacity;
    //putting value
    queue->array[queue->rear]=item;
    //increasing size
    queue->size=queue->size+1;
    
}

int dequeue(Queue* queue){
    if(isempty){
        cout<<"queue is empty";
    }
    //item access
    int item=queue->array[queue->front];
    //incrementation of front
    queue->front=(queue->front+1)%queue->capacity;
    //decreasing the size as trhe suze decsreases
    queue->size-queue->size-1;
    return item;
}

int front(Queue* queue){
    return queue->array[queue->front];
}

int rear(Queue* queue){
    return queue->array[queue->rear];
}
int main()
{
    Queue* queue = createqueue(1000);
 
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
 
    cout << dequeue(queue)
         << " dequeued from queue\n";
 
    cout << "Front item is "
         << front(queue) << endl;
    cout << "Rear item is "
         << rear(queue) << endl;
 
    return 0;
}