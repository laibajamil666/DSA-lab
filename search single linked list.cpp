#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;


void insert(int n) {
    Node *newnode = new Node;
    newnode->data = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    } 
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    
}


int search(int key) {
    Node *temp = head;
    int pos = 1; 
    while (temp != NULL) {
        if (temp->data == key) {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1; 
}


void display() {
    cout << "Data elements in the single linked list are: ";
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    int position = search(5);
    if (position == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at position: " << position << endl;
    }
    display();

    return 0;
}

