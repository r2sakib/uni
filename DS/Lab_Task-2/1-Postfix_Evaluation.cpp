#include <iostream>
using namespace std;

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


int evaluatePostfix(const string &exp) {
    Stack stack(exp.length());

    for (char ch : exp) {
        if (isdigit(ch)) {
            stack.push(ch - '0');
        } 
        else {
            int rightOperand = stack.peek();
            stack.pop();
            int leftOperand = stack.peek();
            stack.pop();

            switch (ch) {
                case '+': 
                    stack.push(leftOperand + rightOperand);
                    break;
                case '-': 
                    stack.push(leftOperand - rightOperand);
                    break;
                case '*': 
                    stack.push(leftOperand * rightOperand); 
                    break;
                case '/': 
                    stack.push(leftOperand / rightOperand); break;
            }
        }
    }
    return stack.peek();
}

int main() {
    string expression;
    cout << "Enter a postfix expression: ";
    cin >> expression;
    cout << "Postfix evaluation " << evaluatePostfix(expression) << endl;
    return 0;
}