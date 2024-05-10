#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int newData) {
        data = newData;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning
    void insertAtHead(int newData) {
        Node* newNode = new Node(newData);
        newNode->next = head;
        head = newNode;
    }

    // Function to delete a node from the head
    void deleteFromHead() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            cout << "List is empty. Cannot delete from head." << endl;
        }
    }

    // Function to delete a node from the tail
    void deleteFromTail() {
        if (!head) {
            cout << "List is empty. Cannot delete from tail." << endl;
            return;
        }

        if (!head->next) {
            delete head;
            head = nullptr;
            return;
        }

        Node* prev = nullptr;
        Node* current = head;
        while (current->next) {
            prev = current;
            current = current->next;
        }
        delete current;
        prev->next = nullptr;
    }

    // Function to delete a node from a specific position
    void deleteFromPosition(int pos) {
        if (!head) {
            cout << "List is empty. Cannot delete from position." << endl;
            return;
        }

        if (pos < 0) {
            cout << "Invalid position. Cannot delete from position." << endl;
            return;
        }

        if (pos == 0) {
            deleteFromHead();
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        int count = 0;
        while (current && count < pos) {
            prev = current;
            current = current->next;
            count++;
        }

        if (!current) {
            cout << "Position out of range. Cannot delete from position." << endl;
            return;
        }

        prev->next = current->next;
        delete current;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Insert some elements
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtHead(1);

    // Display the list
    cout << "Original List: ";
    list.display();

    // Delete from head
    list.deleteFromHead();
    cout << "After deleting from head: ";
    list.display();

    // Delete from tail
    list.deleteFromTail();
    cout << "After deleting from tail: ";
    list.display();

    // Delete from specific position
    list.deleteFromPosition(1); // Deleting the node at position 1
    cout << "After deleting from position 1: ";
    list.display();

    return 0;
}
