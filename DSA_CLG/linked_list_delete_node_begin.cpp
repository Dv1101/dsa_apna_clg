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

void deletee()
{
    struct Node* temp = head;
    head = temp->next;
    temp=NULL;
}

void delete_anywhere(int pos, int n)
{
    struct Node* ptr;
    ptr = head;

    while (ptr->next->data != pos)
    {
        ptr = ptr->next;
    }

    struct Node* ptr1;
    struct Node* tempp;
    tempp = ptr->next;
    ptr1 = ptr->next->next;
    ptr->next = ptr1;
    tempp->next= NULL;
    tempp = NULL; 
}

void deletee_end()
{
    struct Node* ptr;
    ptr = head;
    while( (ptr->next->next) != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
}

void searchh(int pos)
{
    struct Node* ptr;
    ptr = head;
    int counter = 1;
    while (ptr->data != pos)
    {
        ptr = ptr->next;
        counter++;
    }
    cout<<"Element is found at position : "<<counter<<" & Data is : "<<pos<<endl;

}


void sorting()
{
    /*struct Node* ptr;
    ptr = head;
    int n = 0;
    while (ptr != NULL)
    {
        n++;
        ptr = ptr->next;
    }

    struct Node* curr;
    struct Node* index;
    curr = head;
    index = head->next;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((curr != NULL && index != NULL) && (curr->data) > (index->data))
            {
                int temp = curr->data;
                curr->data = index->data;
                index->data = temp;
            }
            if(curr != NULL && index != NULL)
            {
                index = index->next;
            }
            else{
                break;
            }
            
        }
        curr = curr->next;
    }*/
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

void sortingdescending()
{
    /*struct Node* ptr;
    ptr = head;
    int n = 0;
    while (ptr != NULL)
    {
        n++;
        ptr = ptr->next;
    }

    struct Node* curr;
    struct Node* index;
    curr = head;
    index = head->next;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((curr != NULL && index != NULL) && (curr->data) > (index->data))
            {
                int temp = curr->data;
                curr->data = index->data;
                index->data = temp;
            }
            if(curr != NULL && index != NULL)
            {
                index = index->next;
            }
            else{
                break;
            }
            
        }
        curr = curr->next;
    }*/
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
    cout<<endl;
    cout<<"\n Enter your choice where from you want to delete : ";
    cout<<"\n 1) Beginning";
    cout<<"\n 2) Anywhere";
    cout<<"\n 3) End";
    cout<<"\n 4) Search";
    cout<<"\n 5) Sort";
    cout<<"\n 6) Sort in Descending";
    int choice;
    cout<<endl;
    cin>>choice;
    cout<<endl;
    int pos; 
    switch(choice)
    {
        case 1:
            deletee();
            break;
        case 2:
            cout<<"\nEnter a pos at which u want to delete new node : ";
            cin>>pos;
            delete_anywhere(pos, n); 
            break;
        case 3:
            deletee_end();
            break;
        case 4:
            cout<<"\nEnter element you want to find : ";
            cin>>pos;
            searchh(pos);
            break;
        case 5:
            sorting();
            break;
        case 6:
            sortingdescending();
            break;
    }

  
    
    
   
   
   cout<<"\nThe linked list is: ";
   display();
   return 0;
}