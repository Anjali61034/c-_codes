#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

int findMin(Node* head) {
    if (head == nullptr) {
        cerr << "Error: Linked list is empty.\n";
        return INT_MAX; // Return the maximum integer value if the list is empty
    }
    
    int minVal = head->data; // Initialize minVal with the first node's value
    
    Node* current = head->next; // Start from the second node
    
    // Traverse through the linked list
    while (current != nullptr) {
        if (current->data < minVal) {
            minVal = current->data; // Update minVal if a smaller value is encountered
        }
        current = current->next; // Move to the next node
    }
    
    return minVal; // Return the minimum value found
}

int main() {
    Node* head = new Node(3);
    head->next = new Node(9);
    head->next->next = new Node(4);
    head->next->next->next = new Node(6);
    head->next->next->next->next = new Node(2);
    
    int minVal = findMin(head);
    
    cout << "Minimum value in the linked list: " << minVal << endl;
    
    // Clean up: delete all the nodes to prevent memory leaks
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
