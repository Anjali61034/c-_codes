#include <iostream>
using namespace std;

int search(int array[], int x, int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {2, 4, 5, 6, 7, 8, 9, 10, 11, 56};
    int x = 7;
    int n = sizeof(array) / sizeof(array[0]);
    int result = search(array, x, n);
    if (result == -1) {
        cout << "Element not found ";
    } else {
        cout << "Element " << x << " found at position: " << result+1 << endl;
    }
    return 0;
}
