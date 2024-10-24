#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void insert(int n) {
    Node* newNode = new Node;
    newNode->data = n;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        newNode->prev = head;
    } else {
        Node* last = head->prev;
        last->next = newNode;
        newNode->prev = last;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;  // Inserting at the beginning
    }
}

void deleteAtPosition(int position) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    // Deleting the first node (position == 1)
    if (position == 1) {
        if (head->next == head) {
            // Single node case
            delete head;
            head = NULL;
            return;
        }

        // More than one node
        Node* last = head->prev;
        Node* temp = head;

        head = head->next;
        head->prev = last;
        last->next = head;

        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position; i++) {
        temp = temp->next;
        if (temp == head) {
            cout << "Position out of bounds." << endl;
            return;
        }
    }

    Node* prevNode=temp->prev;
    Node* nextNode=temp->next;

    prevNode->next = temp->next;
    nextNode->prev = temp->prev;

    delete temp;
}




void print() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    cout << "Data in linked list are:" << endl;
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    
    print();

    deleteAtPosition(2);
    print();

    return 0;
}

