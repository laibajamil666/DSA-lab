#include <iostream>
using namespace std;

#define MAX 3

class PlateStack {
private:
    int stack[MAX];
    int top;

public:
    PlateStack() { top = -1; }

    void push(int plate) {
        if (top == MAX - 1) {
            cout << "Stack is full! Can't add more plates.\n";
        } else {
            top++;
            stack[top] = plate;
            cout << "Plate " << plate << " added to the stack.\n";
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty! No plates to remove.\n";
        } else {
            cout << "Plate " << stack[top] << " removed from the stack.\n";
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty!\n";
        } else {
            cout << "Top plate is " << stack[top] << ".\n";
        }
    }
};

int main() {
    PlateStack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    stack.peek();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}


