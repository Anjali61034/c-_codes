#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Displaying the top element of the stack
    cout << "Top element of the stack: " << myStack.top() << std::endl;

    // Popping elements from the stack
    myStack.pop();
    cout << "After popping, top element of the stack: " << myStack.top() << std::endl;

    // Checking if the stack is empty
    if (myStack.empty()) {
        cout << "The stack is empty." << std::endl;
    } else {
        cout << "The stack is not empty." << std::endl;
    }

    // Displaying the size of the stack
    cout << "Size of the stack: " << myStack.size() << std::endl;

    return 0;
}
