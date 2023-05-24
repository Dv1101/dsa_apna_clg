#include<bits/stdc++.h>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) 
{
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void insert_end(int new_data) 
{
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   struct Node* ptr;
   ptr = head;
   while (ptr->next != NULL)
   {
        ptr = ptr->next;
   }
   ptr->next = new_node;
   ptr = new_node;
   ptr->next = NULL;
}

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

int main() {
    cout<<"Create a linked List"<<endl;
    cout<<"Enter number of node want to create : ";
    int n, data;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>data;
        insert(data);
    }
    
    cout<<"The linked list is: ";
    display();

    cout<<"\n Number of element you want to enter at end : ";
    int x;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        cin>>data;
        insert_end(data);
    }
    
    
   
   
   cout<<"The linked list is: ";
   display();
   return 0;
}