#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty() {
        return front == NULL;
    }

    bool enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = rear;

        if (rear == NULL) {
            front = rear = newNode;
            return true;
        }

        rear->next = newNode;
        rear = newNode;
        return true;
    }

    bool dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return false;
        }

        Node* temp = front;
        front = front->next;

        if (front != NULL) {
            front->prev = NULL;
        } else {
            rear = NULL;
        }

        delete temp;
        return true;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayReverse() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = rear;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Queue in order: ";
    q.display();

    cout << "Queue in reverse order: ";
    q.displayReverse();

    return 0;
}