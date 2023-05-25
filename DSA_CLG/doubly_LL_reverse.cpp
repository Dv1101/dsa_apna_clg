#include <iostream>
using namespace std;

int count = 0;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

struct Node* head = NULL;

void insert_beg(int data)
{
    struct Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    
    if (head == NULL) {
        head = new_node;
    }
    else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void deleteEle(int elecount)
{
    struct Node* current = head;
    struct Node* temp = NULL;
    int count = 0;
    while (current != NULL) {
        count++;
        if (count == elecount) {
            temp = current;
            break;
        }
        current = current->next;
    }
    if (temp != NULL) {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
}

void display() {
    struct Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void countEle() {
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    
    cout << endl;
}

int main()
{
    insert_beg(10);
    insert_beg(20);
    insert_beg(30);
    insert_beg(40);
    insert_beg(50);
    display();
    countEle();
    int elecount = abs(count/2);
    
    deleteEle(elecount);
    display();
    return 0;
}
