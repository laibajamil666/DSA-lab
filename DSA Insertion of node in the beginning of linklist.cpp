#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *head=NULL;

void insertAtBegining(int n){

	Node *newnode=new Node;
	newnode->data=n;
	newnode->next=head;
	head=newnode;
}


void display(){
	
	cout<<"Data elements in a single link list are: ";
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	insertAtBegining(1);
	insertAtBegining(3);
	insertAtBegining(7);
	display();
	
	return 0;
}
