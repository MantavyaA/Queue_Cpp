#include <iostream>
using namespace std;
#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << value << " enqueued to queue" << endl;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << arr[front] << " dequeued from queue" << endl;
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.display();

    return 0;
}








//Expected Output:
10 enqueued to queue
20 enqueued to queue
30 enqueued to queue
Queue elements: 10 20 30 
10 dequeued from queue
Queue elements: 20 30 
40 enqueued to queue
Queue elements: 20 30 40 
