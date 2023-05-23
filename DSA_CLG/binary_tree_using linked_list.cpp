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

void traverseInOrder(Node* root) {
    if (root != nullptr) {
        traverseInOrder(root->left);
        cout << root->data << " ";
        traverseInOrder(root->right);
    }
}

void traversePreOrder(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        
        traversePreOrder(root->left);
        
        traversePreOrder(root->right);
    }
}

void traversePostOrder(Node* root) {
    if (root != nullptr) {
        traversePostOrder(root->left);
        
        traversePostOrder(root->right);
        cout << root->data << " ";
    }
}

int findBstHeight(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int lheight= findBstHeight(root->left);
        int rheight= findBstHeight(root->right);

        if(lheight>rheight)
        {
            
            return (lheight+1);
        }
        else
        {
            
            return (rheight+1);
        }
    }
}

int InorderPredecessor(Node* root, int predec)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        Node* temp= root;
        Node* pre= NULL;
        while(temp!=NULL)
        {
            if(temp->data==predec)
            {
                if(temp->left!=NULL)
                {
                    pre= temp->left;
                    while(pre->right!=NULL)
                    {
                        pre= pre->right;
                    }
                    return pre->data;
                }
                else
                {
                    return pre->data;
                }
            }
            else if(temp->data>predec)
            {
                temp= temp->left;
            }
            else
            {
                pre= temp;
                temp= temp->right;
            }
        }
    }
}

int InorderSuccessor(Node* root, int succ) {
    if (root == nullptr) {
        return 0;
    } else {
        Node* temp = root;
        Node* suc = nullptr;
        while (temp != nullptr) {
            if (temp->data == succ) {
                if (temp->right != nullptr) {
                    suc = temp->right;
                    while (suc->left != nullptr) {
                        suc = suc->left;
                    }
                    return suc->data;
                } else {
                    return suc->data;
                }
            } else if (temp->data > succ) {
                suc = temp;
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }
    }
}

int leftBoundary(Node* root)
{
    while(root != NULL)
    {
        cout<<root->data<<" ";
        root = root->left;
    }
}

int printLeafNodes(Node* root) {
    if (root == nullptr)
        return 0;

    if (root->left == nullptr && root->right == nullptr)
        cout << root->data << " ";

    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

int rightBoundary(Node* root)
{
    while(root != NULL)
    {
        cout<<root->data<<" ";
        root = root->right;
    }
}

int main() {
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

    
    cout << "In-order traversal: ";
    traverseInOrder(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    traversePreOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    traversePostOrder(root);
    cout << endl;

    
    cout<<endl;

    int height= 0;
    int a, b;

    height =findBstHeight(root->left);
    cout<<"\n Binary tree's Height is : "<<height<<" ( !!! Including lvl 0 !!!)";

    cout<<"\n Enter an Node wwhose Inorder Predecessor you want : ";
    int predec;
    cin>>predec;
    cout<<endl;
    cout<<" Inorder predecessor of node : "<<predec<<" is : "<<InorderPredecessor(root, predec);
    cout<<"\n Enter an Node wwhose Inorder Successor you want : ";
    int sucessor;
    cin>>sucessor;
    cout<<endl;
    cout<<" Inorder Successor of node : "<<sucessor<<" is : "<<InorderSuccessor(root, sucessor);

    cout<<"\n Boundry elements are : "<<endl;
    cout<<leftBoundary(root)<<printLeafNodes(root)<<rightBoundary(root);

    cout<<"\n Asccending order elements using inorder traversal : "<<endl;
    cout << "In-order traversal: ";
    traverseInOrder(root);
    cout << endl;

    return 0;
}
