#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

int findMax(Node* head) {
    if (head == nullptr) {
        cerr << "Error: Linked list is empty.\n";
        return INT_MIN;
    }
    
    int maxVal = head->data;
    
    Node* current = head->next;
    
    while (current != nullptr) {
        if (current->data > maxVal) {
            maxVal = current->data;
        }
        current = current->next;
    }
    
    return maxVal;
}

int main() {
    Node* head = new Node(3);
    head->next = new Node(9);
    head->next->next = new Node(4);
    head->next->next->next = new Node(6);
    head->next->next->next->next = new Node(2);
    
    int maxVal = findMax(head);
    
    cout << "Maximum value in the linked list: " << maxVal << endl;
    
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
