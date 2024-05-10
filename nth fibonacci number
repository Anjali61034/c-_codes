#include <iostream>
using namespace std;

// Recursive function to find the Nth Fibonacci number
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case: Fibonacci of n is the sum of Fibonacci of (n-1) and Fibonacci of (n-2)
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of N to find the Nth Fibonacci number: ";
    cin >> n;

    // Calculate the Nth Fibonacci number
    int result = fibonacci(n);

    // Display the result
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
