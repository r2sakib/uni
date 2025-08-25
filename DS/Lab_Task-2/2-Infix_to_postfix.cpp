#include <iostream>
#include <cctype>
#include <string>

using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int maxSize;

public:
    Queue(int size) {
        maxSize = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return rear == maxSize;
    }

    bool enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return false;
        }

        arr[rear] = value;
        rear++;
        return true;
    }

    bool dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return false;
        }

        front++;
        return true;
    }

    int frontValue() {
        return arr[front];
    }

    void show() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        }

        for (int i = front; i < rear; i++) {
            cout << arr[i] << endl;
        }
    }
};

class Stack {
    int *arr;
    int top;
    int maxSize;

public:
    Stack(int size) {
        maxSize = size;
        arr = new int[size];
        top = 0;
    }

    bool isEmpty() {
        return top == 0; 
    }

    bool isFull() {
        return top == maxSize;
    }

    bool push(int value) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return false;
        }

        arr[top] = value;
        top++; 
        return true;
    }

    bool pop() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return false;
        }

        top--;
        return true;
    }

    int peek() {
        return arr[top-1];
    }

    void show() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
        }

        for (int i=top-1; i>=0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(const string& infix) {
    Stack stack(30);
    Queue queue(30);

    for (char token : infix) {
        if (isalnum(token)) {
            queue.enqueue(token);
        }
        else if (token == '(') {
            stack.push(token);
        }
        else if (token == ')') {
            while (!stack.isEmpty() && stack.peek() != '(') {
                queue.enqueue(stack.peek());
                stack.pop();
            }
            stack.pop();
        }
        else if (token == '+' || token == '-' || token == '*' || token == '/') {
            while (!stack.isEmpty() && precedence(stack.peek()) >= precedence(token)) {
                queue.enqueue(stack.peek());
                stack.pop();
            }
            stack.push(token);
        }
    }

    while (!stack.isEmpty()) {
        queue.enqueue(stack.peek());
        stack.pop();
    }

    string result = "";
    while (!queue.isEmpty()) {
        result += queue.frontValue();
        result += " ";
        queue.dequeue();
    }
    return result;
}

int main() {
    string infixExpression;
    cout << "Enter an infix expression: ";
    cin >> infixExpression;
    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;
    return 0;
}
