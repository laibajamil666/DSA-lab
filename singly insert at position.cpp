#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}

void insertAtposition(int pos, int n) {
    Node *newNode = new Node;
    newNode->data = n;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    
   
    for (int i=1; i<pos-1 && temp!=NULL;i++) {
        temp = temp->next;
    }

   
    if (temp == NULL  ) {
        cout << "Invalid position" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display() {
    cout << "Elements in the list are: " << endl;
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

	insert(12);
	insert(16);
	insert(17);
	insert(1);
	display();
	
	insertAtposition(4,6);
	display();
	return 0;
	
	
  

   
}

