#include <iostream>
using namespace std;

class Node {
public:
    string item;
    Node* next;

    Node(string newItem) {
        item = newItem;
        next = NULL;
    }
};

class GroceryList {
private:
    Node* head;

public:
    GroceryList() {
        head = NULL;
    }

    void addItem(string newItem) {
        Node* newNode = new Node(newItem);
        newNode->next = head;
        head = newNode;
        cout << newItem << " added to the grocery list.\n";
    }

    void removeItem(string removeItem) {
        Node *temp = head;
		 Node *prev = NULL;

        if (temp != NULL && temp->item == removeItem) {
            head = temp->next;
            delete temp;
            cout << removeItem << " removed from the grocery list.\n";
            return;
        }

        while (temp != NULL && temp->item != removeItem) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << removeItem << " not found in the list.\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << removeItem << " removed from the grocery list.\n";
    }

    void viewList() {
        if (head == NULL) {
            cout << "The grocery list is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Grocery list items:\n";
        while (temp != NULL) {
            cout << "- " << temp->item << "\n";
            temp = temp->next;
        }
    }
};

int main() {
    GroceryList list;

    list.addItem("Milk");
    list.addItem("Bread");
    list.addItem("Eggs");

    list.viewList();

    list.removeItem("Bread");

    list.viewList();

    list.removeItem("Cheese");

    return 0;
}

