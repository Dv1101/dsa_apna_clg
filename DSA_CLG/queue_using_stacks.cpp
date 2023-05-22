#include <bits/stdc++.h>
using namespace std;
  
struct Queue {
    stack<int> s1, s2;
  
    void enQueue(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
  
        // Push item into s1
        s1.push(x);
  
        // Push everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
  
    // Dequeue an item from the queue
    int deQueue()
    {
        // if first stack is empty
        if (s1.empty()) {
            cout << "Q is Empty";
            exit(0);
        }
  
        // Return top of s1
        int x = s1.top();
        s1.pop();
        return x;
    }

    // Print the elements in the queue
    void printQueue()
    {
        if (s1.empty()) {
            cout << "\n Queue is empty." << endl;
            return;
        }

        cout << "\n Elements in the queue: ";
        stack<int> temp = s1;

        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    
};


  
// Driver code
int main()
{
    int choice, value;
    Queue q;
    while (true) {
        cout << "Queue Operations:" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int x;
                cout<<"\n Enter element to insert into queue : ";
                cin>>x;
                q.enQueue(x);
                break;
            case 2:
                q.deQueue();
                break;
            case 3:
                q.printQueue();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        cout << endl;
    }



    
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
  
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
  
    return 0;
}