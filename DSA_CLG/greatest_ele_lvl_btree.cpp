#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void insertNode(Node* root, int data) {
    if (data < root->data) {
        if (root->left == nullptr) {
            root->left = newNode(data);
        }
        else {
            insertNode(root->left, data);
        }
    }
    else {
        if (root->right == nullptr) {
            root->right = newNode(data);
        }
        else {
            insertNode(root->right, data);
        }
    }
}

void printData(Node* node){
    cout<<node->left->data<<" ";
    cout<<node->right->data<<" ";

    
}
void traverseZigzag(Node* root) {
    if (root == nullptr)
        return;

    stack<Node*> currentLevel;
    stack<Node*> nextLevel;
    bool leftToRight = true;
    int currentLevelMax = INT_MIN; // Variable to store maximum element at current level

    currentLevel.push(root);

    while (!currentLevel.empty()) {
        Node* node = currentLevel.top();
        currentLevel.pop();

        if (node->data > currentLevelMax) {
            currentLevelMax = node->data; // Update current level maximum
        }

        if (leftToRight) {
            if (node->left)
                nextLevel.push(node->left);
            if (node->right)
                nextLevel.push(node->right);
        } else {
            if (node->right)
                nextLevel.push(node->right);
            if (node->left)
                nextLevel.push(node->left);
        }

        if (currentLevel.empty()) {
            cout << currentLevelMax << " "; // Print maximum element at current level
            currentLevelMax = INT_MIN; // Reset maximum for the next level
            cout << endl;
            swap(currentLevel, nextLevel);
            leftToRight = !leftToRight;
        }
    }
}



int main() 
{
    Node* root = nullptr;

    root = newNode(10);
    insertNode(root, 8);
    insertNode(root, 16);
    insertNode(root, 6);
    insertNode(root, 9);
    insertNode(root, 5);
    insertNode(root, 7);
    insertNode(root, 14);
    insertNode(root, 20);
    insertNode(root, 12);
    insertNode(root, 15);
    insertNode(root, 17);
    insertNode(root, 21);

    cout << "Zig Zag traversal: ";
    traverseZigzag(root);
    cout << endl;

    

    return 0;
}