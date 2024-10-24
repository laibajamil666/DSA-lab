#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    
};


Node *head=NULL;
void insert(int n){
Node *newnode=new Node;
newnode->data=n;
newnode->next=head;
head=newnode;
}

void deleteEnd() {
    if (head == NULL) { 
        cout << "List is empty, nothing to delete!" << endl;
        return;
    }
    if (head->next == NULL) { // Check if there is only one node
        delete head; // Delete the only node
        head = NULL; // Update head to NULL
        return;
    }
    
    Node *temp=head;
    Node *prev;
    while(temp->next!=NULL)
    {
    	prev=temp;
    	temp=temp->next;
	}
    prev->next =NULL;
    delete temp;
}

// Function to display the linked list
void display() {
    cout << "Data elements in a single linked list are: ";
    Node *temp = head;  // Start from the head node
    while (temp != NULL) {  // Traverse until the end of the list
        cout << temp->data << " ";  // Print data of current node
        temp = temp->next;  // Move to the next node
    }
    cout << endl;
}

int main() {
    // Inserting elements into the linked list
    insert(5);
     insert(2);
 insert(4);
     insert(56);
     insert(21);

    cout << "Before deleting the last node:" << endl;
    display();  // Display the list before deletion

    deleteEnd();  // Delete the last node

    cout << "After deleting the last node:" << endl;
    display();  // Display the list after deletion
    
    return 0;
}
    

