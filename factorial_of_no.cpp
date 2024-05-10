#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: factorial of n is n multiplied by factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Call the recursive function to calculate factorial
    int result = factorial(number);

    // Display the result
    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
