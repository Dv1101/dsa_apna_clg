/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    char arr[MAX_SIZE]; // Array to store stack elements
    int top; // Index of the top element

public:
    Stack() {
        top = -1; // Initialize top to -1 to indicate an empty stack
    }

    void push(char value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack overflow!" << endl;
            return;
        }

        arr[++top] = value; // Increment top and add the value to the stack
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow!" << endl;
            return;
        }

        --top; // Decrement top to remove the top element
    }

    char topElement() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return '\0'; // Return a default value to indicate an empty stack
        }

        return arr[top]; // Return the top element
    }

    bool isEmpty() {
        return (top == -1); // Check if the stack is empty
    }
};

bool isMatchingPair(char opening, char closing) {
    return (opening == '[' && closing == ']') ||
           (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}');
}

bool isBalanced(string expr) {
    Stack stack;

    for (char c : expr) {
        if (c == '[' || c == '(' || c == '{') {
            stack.push(c);
        } else if (c == ']' || c == ')' || c == '}') {
            if (stack.isEmpty() || !isMatchingPair(stack.topElement(), c)) {
                return false;
            } else {
                stack.pop();
            }
        }
    }

    return stack.isEmpty();
}

int main() {
    string expr;
    cout << "Enter the expression: ";
    cin >> expr;

    if (isBalanced(expr)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is not balanced." << endl;
    }

    return 0;
}

