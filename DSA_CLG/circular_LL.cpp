#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node* next;
};

struct Node* head = NULL;

void insert(int new_data) {
   struct Node* new_node = new Node();
   new_node->data = new_data;
   if (head == NULL) {
      head = new_node;
      new_node->next = head;
   } else {
      struct Node* temp = head;
      while (temp->next != head)
         temp = temp->next;
      temp->next = new_node;
      new_node->next = head;
   }
}

void delete_beginning() {
   if (head == NULL) {
      cout << "List is empty. Deletion not possible." << endl;
      return;
   }
   if (head->next == head) {
      head = NULL;
      return;
   }
   struct Node* temp = head;
   
   while (temp->next != head)
      temp = temp->next;
   temp->next = head->next;
   head = head->next;
   delete temp;
}

void delete_end() {
   if (head == NULL) {
      cout << "List is empty. Deletion not possible." << endl;
      return;
   }
   if (head->next == head) {
      head = NULL;
      return;
   }
   struct Node* temp = head;
   struct Node* prev = NULL;
   while (temp->next != head) {
      prev = temp;
      temp = temp->next;
   }
   prev->next = head;
   delete temp;
}

void display() {
   struct Node* ptr = head;
   if (head == NULL) {
      cout << "List is empty." << endl;
      return;
   }
   do {
      cout << ptr->data << " ";
      ptr = ptr->next;
   } while (ptr != head);
   cout << endl;
}

int main() {
   cout << "Create a linked List" << endl;
   cout << "Enter the number of nodes you want to create: ";
   int n, data;
   cin >> n;
   cout << "Enter the data for each node: " << endl;
   for (int i = 0; i < n; i++) {
      cin >> data;
      insert(data);
   }

   bool flag =true;

   cout << "The linked list is: ";
   display();

   while(flag)
   {
        cout << "\nEnter your choice where you want to delete: " << endl;
        cout << "1) Beginning" << endl;
        cout << "2) End" << endl;
        cout << "3) Exit" << endl;

        int choice;
        cin >> choice;
        cout << endl;
        int pos;
        switch (choice) {
            case 1:
                delete_beginning();
                break;
            case 2:
                delete_end();
                break;
            case 3:
                return 0;
        }

        cout << "\nThe linked list after deletion is: ";
        display();
   }
   
   return 0;
}
