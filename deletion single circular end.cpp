#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void deleteAtEnd() {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    if (head->next == head) {
        delete head;
        head = NULL;
    } else {
        Node *temp = head;
        Node *prev = NULL;

        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        delete temp;
    }
}

void print() {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }
    Node *temp = head;
    cout << "Elements in the list: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    insert(8);
    insert(6);
    insert(4);
    insert(2);
    print();

    cout << "Linked list after deletion at end:" << endl;
    deleteAtEnd();
    print();
    
    return 0;
}

