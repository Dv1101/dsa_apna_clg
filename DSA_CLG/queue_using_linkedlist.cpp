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
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return; 
    }

    struct Node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = new_node;   
}

void pop()
{
    struct Node* temp = head;
    head = temp->next;
    temp=NULL;
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
        cout<<"\n 3) Print";
        cout<<"\n 4) !!!! Exit !!!!";
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
                display();
                break;
            case 4:
                flag=true;
                break;
        }
    }
    return 0;
}