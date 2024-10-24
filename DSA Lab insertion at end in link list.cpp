#include <iostream>
using namespace std;

struct Node {     
    int data;
    Node *next;
};

Node *head = NULL;

void insertAtEnd(int n) {
    Node *newnode = new Node;
    newnode->data = n;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return ;
    }
else 
{

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}
}
void display() {
    cout << "Data elements in a single linked list are: ";
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);

    display();

    return 0;
}

