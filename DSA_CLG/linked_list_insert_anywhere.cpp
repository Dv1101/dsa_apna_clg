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

void insert_anywhere(int pos, int data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    struct Node* ptr;
    ptr = head;
    while( (ptr->data) != pos)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;

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

    cout<<"\nEnter a pos at which u want to entera new node : ";
    int pos; 
    cin>>pos;
    cout<<"\nEnter data : ";
    cin>>data;

    insert_anywhere(pos, data); 
    
    
   
   
   cout<<"The linked list is: ";
   display();
   return 0;
}