#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;
public:
    Stack() { top = NULL; }
    void push(int);
    int pop();
    void display();
};

void Stack::push(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
}

int Stack::pop() {
    if (top == NULL) {
        cout << "Stack Underflow";
        return -1;
    }
    int x = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return x;
}

void Stack::display() {
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << s.pop() << endl;
    s.display();
    return 0;
}