#include<bits/stdc++.h>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

struct Nodee {
    int dataa;
    Nodee* leftt;
    Nodee* rightt;
};

struct Nodee* headd = NULL;

void insert(int new_data) 
{
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void sorting()
{
    if (head == NULL || head->next == NULL)
        return;

    struct Node* curr;
    struct Node* prev = NULL;
    bool swapped;

    do {
        swapped = false;
        curr = head;

        while (curr->next != prev) {
            if (curr->data > curr->next->data) {
                int temp = curr->data;
                curr->data = curr->next->data;
                curr->next->data = temp;
                swapped = true;
            }

            curr = curr->next;
        }

        prev = curr;
    } while (swapped);
}

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

Nodee* newNodee(int dataa) {
    Nodee* nodee = new Nodee;
    nodee->dataa = dataa;
    nodee->leftt = nullptr;
    nodee->rightt = nullptr;
    return nodee;
}

void insertNodee(Nodee* roott, int dataa) {
    if (dataa < roott->dataa) {
        if (roott->leftt == nullptr) {
            roott->leftt = newNodee(dataa);
        }
        else {
            insertNodee(roott->leftt, dataa);
        }
    }
    else {
        if (roott->rightt == nullptr) {
            roott->rightt = newNodee(dataa);
        }
        else {
            insertNodee(roott->rightt, dataa);
        }
    }
}

void convert() {
   struct Nodee* ptrr;
   struct Node* ptr;
   ptrr = headd;
   ptr = head;

   Nodee* roott = nullptr;
   roott = newNodee(ptr->data);
   ptr = ptr->next;
   while (ptr != NULL) {
        insertNodee(roott, ptr->data);
        ptr = ptr->next;
   }

   headd = roott;
}

void traverseInOrder(Nodee* roott) {
    if (roott != nullptr) {
        traverseInOrder(roott->leftt);
        cout << roott->dataa << " ";
        traverseInOrder(roott->rightt);
    }
}

int main() {
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
   
   cout<<"\nThe linked list is: ";
   display();

   sorting();

   cout<<"\nThe linked list after sorting: ";
   display();

   convert();

   cout<<"\nThe binary tree is: ";
   // Print the binary tree (inorder traversal) - left, root, right
   traverseInOrder(headd);

   return 0;
}