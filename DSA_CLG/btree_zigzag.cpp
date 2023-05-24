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
void traverseZigzag(Node* root){
    if (root == nullptr)
        return;
    
    cout<<endl;
    stack<Node*> currentLevel;
    stack<Node*> nextLevel;
    bool leftToRight = true;

    currentLevel.push(root);

    while (!currentLevel.empty()) {
        Node* node = currentLevel.top();
        currentLevel.pop();

        cout << node->data << " ";

        if (leftToRight) {
            if (node->left != nullptr) {
                nextLevel.push(node->left);
            }
            if (node->right != nullptr) {
                nextLevel.push(node->right);
            }
        } else {
            if (node->right != nullptr) {
                nextLevel.push(node->right);
            }
            if (node->left != nullptr) {
                nextLevel.push(node->left);
            }
        }

        if (currentLevel.empty()) {
            cout << endl;
            swap(currentLevel, nextLevel);
            leftToRight = !leftToRight;
        }
    }
}

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

int diameter(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);

    
    int rootDiameter = leftHeight + rightHeight + 1;

    
    return max(rootDiameter, max(leftDiameter, rightDiameter));
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

    cout << "Diameter of the BST: " << diameter(root) << endl;

    return 0;
}