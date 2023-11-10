#include<iostream>
using namespace std;

struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q, int size) {
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[q->size];
}

// time complexity:O(1) - constant time for inserting element in queue  
void enqueue(Queue *q, int element) { 
    if(q->rear == q->size-1) cout<<"Queue is full...";
    else {
        q->rear++;
        q->Q[q->rear] = element;
    }
}

int dequeue(Queue *q) {
    int x = -1;
    if(q->rear == q->front) cout<<"Queue is empty...";
    else{
        q->front++;
        x = q->Q[q->front];
    }
}

void Display(Queue q) {
    for (int i = q.front+1; i <= q.rear; i++)
        cout<<q.Q[i]<<" ";
    cout<<endl;
}

int main()
{
    // creating a queue...
    Queue q;
    int size;

    create(&q, 5);

    // inserting element in Queue..
    enqueue(&q, 4);
    enqueue(&q, 2);
    enqueue(&q, 8);
    enqueue(&q, 9);

    Display(q);
    
    dequeue(&q);

    Display(q);
    return 0;
}