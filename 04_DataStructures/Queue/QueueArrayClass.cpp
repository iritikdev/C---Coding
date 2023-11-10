/**
 * A simple queue implementation with a Array
 *
 * @author Ritik Sharma, hrithiksharma.muz@gmail.com
 */
#include<iostream>

class Queue {
    private:
        int size;
        int front;
        int rear;
        int *Q;
    public:
        Queue(int size=10) {
            this->size = size;
            this->front = this->rear = -1;
            this->Q = new int[this->size];
        }
        ~Queue() {
            delete []Q;
        }
        int isFull();
        int isEmpty();
        void enqueue(int element);
        int dequeue();
        void Display();
};

int Queue::isFull() {
    return (rear == size-1);
}

int Queue::isEmpty() {
    return (front==rear);
}

void Queue::enqueue(int element) {
    if(isFull())
        std::cout<<"Queue is full.";
    else {
        rear++;
        Q[rear] = element;
    }
}

int Queue::dequeue() {
    int element = -1;
    if(isEmpty())
        std::cout<<"Queue is Empty.\n";
    else {
        front++;
        element = Q[front];
    }
    return element;
}

void Queue::Display() {
    for (int i = front+1; i <= rear; i++) {
        std::cout<<Q[i]<<" ";
    }
    std::cout<<std::endl;
}

int main() {
    Queue q(5);
    q.enqueue(5);
    q.enqueue(8);
    q.enqueue(1);
    q.enqueue(2);

    q.Display();

    q.dequeue();
    q.Display();

    return 0;
}