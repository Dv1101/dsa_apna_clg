#include<bits/stdc++.h>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void push(int new_data) 
{
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void pop()
{
    struct Node* temp = head;
    head = temp->next;
    temp=NULL;
}

void peek()
{
    struct Node* ptr;
    ptr = head;
    cout<<"Peek element in stack is : "<<ptr->data;
}

void display() 
{
   struct Node* ptr;
   ptr = head;
    cout<<"Stack is : "<<endl;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   cout<<endl;
}

int main()
{
    bool flag = false;
    int choice, data;

    while(flag != true)
    {
        cout<<"\n Enter your choice  : ";
        cout<<"\n 1) Push";
        cout<<"\n 2) Pop";
        cout<<"\n 3) Peek";
        cout<<"\n 4) Print";
        cout<<"\n 5) !!!! Exit !!!!";
        cout<<endl;
        cin>>choice;
        cout<<endl;
        int pos; 
        switch(choice)
        {
            case 1:
                cout<<"\nEnter an element you want to push : ";
                cin>>data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                flag=true;
                break;
        }
    }
    return 0;
}