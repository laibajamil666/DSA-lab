#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node* prev;
};

Node* head=NULL;
void insert(int n)
{
	Node* newnode=new Node;
	newnode->data=n;
	if (head==NULL)
	{
		head=newnode;
		newnode->next=newnode;
		newnode->prev=newnode;
	}
	else
	{
		Node* last=head->prev;
		newnode->next=head;
		newnode->prev=last;
		head->prev=newnode;
		last->next=newnode;
		head=newnode;
		
	}
}
void deleteAtStart() {
    if (head == NULL) {  
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    if (head->next == head) {
        head = NULL;  
        delete temp;
    } else {
        Node* last = head->prev;  
        head = head->next;
        last->next = head;
        head->prev = last;
        delete temp;
    }
    cout << "Node deleted at start." << endl;
}
void printList() {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    cout << "List elements: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
	
	insert(11);
	insert(18);
	insert(16);
	insert(12);
	insert(13);
   printList();
   
   deleteAtStart();
   printList();
   
   return 0;
}
